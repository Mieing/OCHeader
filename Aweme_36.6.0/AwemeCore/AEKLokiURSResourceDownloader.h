@class NSString;

@interface AEKLokiURSResourceDownloader : NSObject <AEKURSResourceDownloadProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)fetchResources:(id)a0 saveCache:(BOOL)a1 onProgress:(id /* block */)a2 completion:(id /* block */)a3;
+ (unsigned long long)fetchResources:(id)a0 onProgress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)cancelTask:(unsigned long long)a0;


@end
