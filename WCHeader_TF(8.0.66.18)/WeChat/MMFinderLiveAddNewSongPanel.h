@class MMTableView, NSArray, MMFinderLiveAddNewSongTableViewModel, NSString, UILabel, UIView, MMUIButton;
@protocol MMFinderLiveAddNewSongPanelDelegate;

@interface MMFinderLiveAddNewSongPanel : MMPageSheetBaseView <MMPageSheetGestureRecognizerDelegate>

@property (retain, nonatomic) NSArray *originalSongs;
@property (retain, nonatomic) UIView *topControlContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (retain, nonatomic) MMTableView *songsTableView;
@property (retain, nonatomic) MMFinderLiveAddNewSongTableViewModel *songsTableVM;
@property (weak, nonatomic) id<MMFinderLiveAddNewSongPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSongs:(id)a0;
- (void)setup;
- (void)setupPageSheetConfig;
- (BOOL)pageSheetGestureRecognizerShouldBegin:(id)a0;
- (void)pageSheetWillAppear;
- (void)pageSheetWillDisappear;
- (void)updateSongsFromServer:(id)a0;
- (void)layoutSubviews;
- (void)buildSongsTableView;
- (void)buildTopControlViews;
- (double)contentWidth;
- (double)contentHeight;
- (void)onCancel;
- (void)onConfirm;
- (BOOL)validateSongNames:(id)a0 firstInvalidIndex:(unsigned long long *)a1;
- (id)getCurrentValidSongs;
- (void).cxx_destruct;

@end
