@class NSString;

@interface AWELiveSetting : NSObject <AWELiveSettingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLiveSetting;

- (BOOL)hasCreatedLiveRoom;
- (BOOL)isLiveGuideShowing;
- (void)setHasCreatedLiveRoom:(BOOL)a0;
- (void)setIsLiveGuideShowing:(BOOL)a0;
- (void)setHadShowLiveBubbleGuide;
- (BOOL)enableLiveBubbleGuideSettings;
- (id)liveGuideBubbleImageURL;
- (void)setClickShootToLive:(BOOL)a0;
- (BOOL)clickShootToLive;

@end
