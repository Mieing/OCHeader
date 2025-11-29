@class MMUIImageView, MMFinderLiveGameTeamInfo, NSString, MMFinderLiveTaskId, UIView, NSURL, MMUILabel;

@interface MMLiveGameJoinTeamShowGiftView : MMUIButton <MMImageLoaderObserver> {
    BOOL _showReddot;
    BOOL _checkStatsShowed;
    BOOL _touchDown;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMUIImageView *iconView;
@property (retain, nonatomic) MMUILabel *wordingLable;
@property (retain, nonatomic) MMUIImageView *rightView;
@property (retain, nonatomic) UIView *redView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveGameTeamInfo *gameTeamInfo;
@property (retain, nonatomic) NSURL *iconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)checkStatsShow;
- (void)fetchGameTeamGiftStatus;
- (void)layoutUI;
- (void)updateGameInfo:(id)a0 gameTeamInfo:(id)a1;
- (void)sizeToFit;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)onTouchUpOutside;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
