@class NSString;

@interface AWEStudioSpecialPlusManager : HTSService <AWEStudioSpecialPlusManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;
+ (void)cleanCachedModelResources;
+ (void)setIsShowingSpecialPlusIcon:(BOOL)a0;
+ (BOOL)isShowingSpecialPlusIcon;
+ (void)setHasShowedSpecialPlusButtonBubble:(BOOL)a0;
+ (BOOL)hasShowedSpecialPlusButtonBubble;
+ (BOOL)hasClickedSpecialPlusButton;
+ (void)setHasClickedSpecialPlusButton:(BOOL)a0;
+ (BOOL)shouldShowStudioSpecialPlusIconWithAwemeModel:(id)a0;
+ (BOOL)isInStudioSpecialPlusActivityTime;
+ (BOOL)forbidApplyUserRemainStrategy;
+ (BOOL)shouldShowUserRemainHotPropIconPlus;
+ (BOOL)shouldAutoStartRecognitionForUserRemainStrategy;
+ (BOOL)shouldContinueCheckShowSpecialPlusButton;
+ (BOOL)isShowingSpecialPlusIconWithVersionCompare;
+ (id)sharedManager;

- (id)aAWEStudioGlobalConfig;
- (id)initPrivate;

@end
