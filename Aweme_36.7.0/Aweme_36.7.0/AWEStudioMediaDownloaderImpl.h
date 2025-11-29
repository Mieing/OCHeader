@class NSString;

@interface AWEStudioMediaDownloaderImpl : NSObject <AWEStudioMediaDownloaderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadVideoWithURLGoup:(id)a0 destinationURL:(id)a1 progress:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
