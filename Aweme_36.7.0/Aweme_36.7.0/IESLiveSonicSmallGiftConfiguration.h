@class NSArray, NSString;

@interface IESLiveSonicSmallGiftConfiguration : NSObject <IESLiveSmallGiftConfigurationProtocol>

@property (nonatomic) double originY;
@property (nonatomic) double previousOriginY;
@property (nonatomic) double viewSpacing;
@property (nonatomic) double giftWidth;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) double sonicHeight;
@property (nonatomic) unsigned long long smallGiftViewCount;
@property (nonatomic) unsigned long long smallGiftMode;
@property (copy, nonatomic) NSArray *giftViewFrames;
@property (nonatomic) BOOL isOnMessageListOptimizationScene;
@property (nonatomic) BOOL isOnLandspaceContentLiveOptimizationScene;
@property (nonatomic) BOOL isHighValueAreaMoveDownScene;
@property (nonatomic) BOOL smallGiftViewSingleChannelEnabled;
@property (nonatomic) double scale;
@property (nonatomic) BOOL isVSRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setInteractiveScene:(unsigned long long)a0;
- (void)resetFrame;
- (void)setFrameOriginY:(double)a0;
- (void)fragmentOrientationChanged:(long long)a0 inGame:(BOOL)a1;
- (void)checkForLandscape;
- (BOOL)needHideForLandscape;
- (void)adjustMessageListMaskHeightWithCount:(long long)a0;
- (double)p_msgListBottomPaddingOnSonic;
- (void).cxx_destruct;
- (id)init;

@end
