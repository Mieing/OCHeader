@class NSString;

@interface WCFinderLiveReplayPreviewImgInfo : NSObject <MMImageLoaderObserver>

@property (retain, nonatomic) NSString *imgTargetUrl;
@property (nonatomic) unsigned long long loadState;
@property (copy, nonatomic) id /* block */ preLoadCompletion;
@property (nonatomic) unsigned long long preRequestCnt;
@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) double timeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getFixedSectionFromImgUrl:(id)a0;

- (unsigned long long)getImgLoadState;
- (void)preLoadImage;
- (void)checkLoadState;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1 extraInfo:(id)a2;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
