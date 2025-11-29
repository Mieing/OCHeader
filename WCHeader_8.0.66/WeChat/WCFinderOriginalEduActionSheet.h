@class NSString, NSArray, FinderOriginalTypeItem, UIView, MMUIButton, MMCommonActionSheetPicker;
@protocol WCFinderOriginalEduActionSheetDelegate;

@interface WCFinderOriginalEduActionSheet : WCActionSheet <ILinkEventExt, MMCommonActionSheetPickerDelegate>

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) MMUIButton *agreementCheckbox;
@property (retain, nonatomic) MMUIButton *acceptBtn;
@property (retain, nonatomic) FinderOriginalTypeItem *selectedOriginal;
@property (retain, nonatomic) MMCommonActionSheetPicker *startTimePicker;
@property (nonatomic) BOOL showRewardTips;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<WCFinderOriginalEduActionSheetDelegate> originalDelegate;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) NSString *fromFeedId;
@property (nonatomic) unsigned long long sourcePageType;
@property (nonatomic) BOOL agreementSelect;
@property (retain, nonatomic) NSArray *originalItems;
@property (nonatomic) BOOL isLoadingOriginal;
@property (nonatomic) BOOL shouldShowInterests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShowRewardTips:(BOOL)a0 delegate:(id)a1;
- (id)initWithShowRewardTips:(BOOL)a0 delegate:(id)a1 type:(unsigned long long)a2;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)bind25496ReportFromSetView:(id)a0;
- (void)updateAcceptBtnBkg;
- (void)onCheckBoxClicked:(id)a0;
- (void)onClickAcceptBtn;
- (void)onClickOriginTypeButton;
- (void)commonPickerConfirm:(id)a0 selectedRows:(id)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
