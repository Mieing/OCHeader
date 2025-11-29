@class NSString, UIImageView, MMUIButton, MMUILabel;

@interface MMFinderLiveKTVEmptyContentView : MMFinderLiveKTVBaseView <MMFinderLiveKTVUIExt, MMFinderLiveKTVLogicExt>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) NSString *ktvThemeResourceFetchSessionToken;
@property (copy, nonatomic) id /* block */ clickActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateActionButtonText:(BOOL)a0;
- (void)onLiveTask:(id)a0 audienceConnectingMicStatusChanged:(BOOL)a1;
- (void)onLiveKTVModeChanged:(BOOL)a0 taskId:(id)a1;
- (id)liveTask;
- (void)onActionButtonClicked;
- (void)onLiveKTVMainWidgetColorUpdate:(id)a0 taskId:(id)a1;
- (void).cxx_destruct;

@end
