@class NSString;

@interface AWEStudioVideoToolImpl : NSObject <AWEStudioVideoToolProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveVideoToAlbum:(id)a0 completion:(id /* block */)a1;

@end
