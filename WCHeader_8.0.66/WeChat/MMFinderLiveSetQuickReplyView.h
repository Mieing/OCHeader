@class FinderLiveQuickReplyWordingInfo, NSString, MMFinderLiveSetQuickReplyTableViewModel, CAShapeLayer, UIView, MMFinderLiveQuickReplyViewNavBar, MMTableView;
@protocol MMFinderLiveSetQuickReplyViewDelegate;

@interface MMFinderLiveSetQuickReplyView : MMPageSheetBaseView <MMFinderLiveSetQuickReplyTableDataDelegate> {
    MMFinderLiveSetQuickReplyTableViewModel *_tableViewModel;
}

@property (readonly, nonatomic) MMFinderLiveSetQuickReplyTableViewModel *tableViewModel;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMFinderLiveQuickReplyViewNavBar *navBar;
@property (retain, nonatomic) MMTableView *quickReplyTableView;
@property (retain, nonatomic) FinderLiveQuickReplyWordingInfo *model;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL hasEdit;
@property (nonatomic) long long previousOrientation;
@property (weak, nonatomic) id<MMFinderLiveSetQuickReplyViewDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pageSheetDidRotation;
- (void)handleUIOrientationChanged:(id)a0;
- (void)dealloc;
- (id)initWithQuickReplyModel:(id)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)updateModel:(id)a0;
- (void)updateInnerModel:(id)a0;
- (void)pageSheetDidAppear;
- (id)changeModelWithModel:(id)a0;
- (id)getNewWordingInfoWithModel:(id)a0;
- (id)getEmptyQuickReplyModel;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (double)getLotteryTableHeight;
- (void)actionClick:(BOOL)a0;
- (void)handleModelList:(id)a0;
- (void)handleTextWithModel:(id)a0;
- (id)stringByRemovingLastEmptyLineInString:(id)a0;
- (void)quickReplyTableAddButtonClick;
- (void)quickReplyTableCleanButtonClick:(id)a0 dataArray:(id)a1;
- (void)quickReplyTableTextViewDidChange:(id)a0;
- (void)judgeCompleButtonState:(id)a0;
- (BOOL)isEmptyDataArray:(id)a0;
- (void).cxx_destruct;

@end
