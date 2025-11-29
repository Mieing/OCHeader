@class NSString, NSMutableArray;
@protocol IESLiveGoldenLabelViewModelDelegate;

@interface IESLiveGoldenMicLabelViewModel : NSObject

@property (weak, nonatomic) id<IESLiveGoldenLabelViewModelDelegate> delegate;
@property (nonatomic) BOOL isVideoLive;
@property (nonatomic) double distanceFromIconToLeft;
@property (nonatomic) double distanceFromIconToTop;
@property (nonatomic) double distanceFromLabelToIcon;
@property (nonatomic) double distanceFromLabelToTop;
@property (nonatomic) double fontSize;
@property (nonatomic) long long goldenMicCount;
@property (nonatomic) long long silverMicCount;
@property (copy, nonatomic) NSString *goldMicText;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isSilverAnimatingInGoldenScene;
@property (nonatomic) int currentShowingType;
@property (nonatomic) BOOL isBackGround;
@property (nonatomic) BOOL goldenMicV3;
@property (retain, nonatomic) NSMutableArray *waitingItemArrays;

- (id)initWithConfig:(id)a0 diContext:(id)a1;
- (void)updateMicLabelCount:(id)a0;
- (void)setupBackgroundNotification;
- (void)showMicAnimationWithItem:(id)a0;
- (void)checkWaitingItemsArray;
- (id)getSingingLabelConfig;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)a0;
- (void)appWillEnterForeground:(id)a0;

@end
