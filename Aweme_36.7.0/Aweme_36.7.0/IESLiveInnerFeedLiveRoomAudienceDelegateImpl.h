@class IESLiveInnerFeedLiveRoomItemModel, IESLiveEnterRoomAisle, NSString;
@protocol IESLiveAWEFeedModuleService;

@interface IESLiveInnerFeedLiveRoomAudienceDelegateImpl : NSObject <HTSLiveAudienceViewControllerDelegate>

@property (retain, nonatomic) IESLiveInnerFeedLiveRoomItemModel *itemModel;
@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (nonatomic) BOOL isExitToast;
@property (retain, nonatomic) id<IESLiveAWEFeedModuleService> feedService;
@property (copy, nonatomic) id /* block */ showFinishVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnterRoom:(id)a0;
- (void)closeWithRoom:(id)a0 closeType:(unsigned long long)a1;
- (BOOL)canCloseWithRoom:(id)a0 closeType:(unsigned long long)a1;
- (BOOL)unwindToAudienceController:(id)a0 animated:(BOOL)a1;
- (void)didCloseRoom:(id)a0 closeType:(unsigned long long)a1;
- (void)audienceViewControllerVideoPlayerDidLoadFirstFrame:(id)a0;
- (id)promptWithEnterRoomFail:(id)a0 closeType:(unsigned long long)a1;
- (BOOL)isSlideViewController;
- (BOOL)disablePopout;
- (void)updateItemModel:(id)a0;
- (BOOL)canSlideToNextWithRoom:(id)a0 closeType:(unsigned long long)a1;
- (void)slideToNextRoomWithType:(unsigned long long)a0;
- (BOOL)needSlideToNextWithItemModel:(id)a0 closeType:(unsigned long long)a1;
- (void)p_closeRoom:(id)a0 withType:(unsigned long long)a1;
- (void)popoutWithType:(unsigned long long)a0;
- (void)popoutWithAnimation:(BOOL)a0 type:(unsigned long long)a1;
- (BOOL)enableAutoEnterNextPage;
- (long long)autoSlideNextRetryCount;
- (void)prepareForRoomAisle:(id)a0;
- (void).cxx_destruct;

@end
