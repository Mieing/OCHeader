@class HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality, IESLivePlayerResolutionController;
@protocol IESLivePlayerStoredResolutionKeyProvider;

@interface IESLiveAutoClarityManager : NSObject

@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality *localAutoQuality;
@property (nonatomic) BOOL isVSRoom;
@property (nonatomic) BOOL shouldShowViceView;
@property (nonatomic) BOOL vpassDefault;
@property (retain, nonatomic) IESLivePlayerResolutionController *resolutionController;
@property (retain, nonatomic) id<IESLivePlayerStoredResolutionKeyProvider> storedResolutionKeyProvider;

+ (BOOL)checkLocalAutoEnable;
+ (id)streamQualityMediaSize:(id)a0 sdkKey:(id)a1;
+ (long long)isHorizontalStreamResolution:(id)a0;
+ (id)adjustPreviewResolutionWithModel:(id)a0;
+ (BOOL)checkNotAllowLocalAutoQuality:(BOOL)a0 hasViceView:(BOOL)a1;
+ (id)checkAndHandleWideScreenStreamWithQualityArray:(id)a0 isVSRoom:(BOOL)a1;
+ (id)findStartPlayRealLocalAutoQualityWithRoomModel:(id)a0;

- (id)setUpAutoQuality:(id)a0 qualityArray:(id)a1;
- (id)addLocalAutoQualityIfNeeded:(id)a0;
- (id)findAutoQualityWithArray:(id)a0;
- (BOOL)checkSelectedIndexIsAuto:(long long)a0 qualityList:(id)a1;
- (id)findRealQualityManualSwitchAutoQuality:(id)a0 isVRRoom:(BOOL)a1 vpassDefault:(BOOL)a2;
- (BOOL)checkIsAutoQuality:(id)a0;
- (void)updateShowLocalAutoQualityIfNeeded:(id)a0 complete:(id /* block */)a1;
- (BOOL)checkNotAllowLocalAutoQuality;
- (id)findPlayerAutoQualityWithArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
