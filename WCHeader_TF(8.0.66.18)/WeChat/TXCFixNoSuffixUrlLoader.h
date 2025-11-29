@class NSURL, NSString;

@interface TXCFixNoSuffixUrlLoader : NSObject <AVAssetResourceLoaderDelegate>

@property (copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *fileType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0 fileType:(id)a1;
- (id)probeAudioTypeWithHeadData:(id)a0 contentType:(id)a1;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (void).cxx_destruct;

@end
