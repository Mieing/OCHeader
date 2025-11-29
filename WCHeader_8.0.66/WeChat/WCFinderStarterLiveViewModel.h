@class WCFinderLiveStartePublicModel, WCFinderLiveStarteVideoModeViewModel, NSString, WCFinderLiveStarteGameModeViewModel, WCFinderLiveStarteAudioModeViewModel;

@interface WCFinderStarterLiveViewModel : NSObject <MMFinderLiveCreateLotteryViewModelDelegate, WCFinderLiveStartLotteryViewControllerDelegate>

@property (retain, nonatomic) WCFinderLiveStartePublicModel *publicModel;
@property (retain, nonatomic) WCFinderLiveStarteVideoModeViewModel *videoModeViewModel;
@property (retain, nonatomic) WCFinderLiveStarteAudioModeViewModel *audioModeViewModel;
@property (retain, nonatomic) WCFinderLiveStarteGameModeViewModel *gameModeViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showCreateLotteryView;
- (void)hideCreateLotteryView;
- (void)hideCreateLotteryViewWithCompletion:(id /* block */)a0;
- (void)showStartLotteryVC;
- (void)fetchLotteryArray:(id /* block */)a0;
- (id)getCurrentViewController;
- (void)showLotteryView;
- (void)createLotteryClick;
- (void)deleteLotteryClick:(id)a0 session:(long long)a1;
- (void)realDeleteLotteryClick:(id)a0 session:(long long)a1;
- (void)onLiveLotteryRecordClick;
- (void)onLotteryCellHoverClicked:(id)a0 textItem:(id)a1;
- (void)startLotteryViewControllerSaveLottery:(id)a0;
- (BOOL)isVideoMode;
- (BOOL)isAudioMode;
- (BOOL)isGameMode;
- (id)init;
- (id)currentLiveModeViewModel;
- (void).cxx_destruct;

@end
