@class NSString;

@interface AWEAdFeedInspireManager : HTSService <AWEAdFeedInspireManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCommerceWidgetScene:(id)a0;
+ (Class)aAWEAdFeedInspireAdapterClass;

- (void)getGeckoResource;
- (id)getFeedInspireLottie;
- (id)getFeedInspireMusicData;
- (void)setContinueTaskJumpOtherPage:(BOOL)a0 logID:(id)a1;
- (void)setIsJumpToWebview:(BOOL)a0 logID:(id)a1;
- (void)getCommerceWidgetInspireInfo:(id /* block */)a0 roomId:(id)a1;
- (void)rewardFinishBlockInLive:(id /* block */)a0 roomId:(id)a1;
- (void)notifyCommerceWidgetProgress:(id)a0 roomId:(id)a1;
- (id)aAWEAdFeedInspireAdapter;

@end
