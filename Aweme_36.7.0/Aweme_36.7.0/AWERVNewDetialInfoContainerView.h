@class NSString, AWEAwemeModel, AWERVNewDetailPageContext, AWERVNewDetailInteractiveView, AWERVNewDescriptionInfoView;

@interface AWERVNewDetialInfoContainerView : UIView <AWERVNewDescriptionViewDelegate>

@property (retain, nonatomic) AWERVNewDescriptionInfoView *descriptionView;
@property (retain, nonatomic) AWERVNewDetailInteractiveView *interactiveView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) long long style;
@property (retain, nonatomic) AWERVNewDetailPageContext *context;
@property (copy, nonatomic) id /* block */ expandClickBlock;
@property (copy, nonatomic) id /* block */ likeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ shareBtnClickedBlock;
@property (copy, nonatomic) id /* block */ collectBtnClickedBlock;
@property (copy, nonatomic) id /* block */ commentBtnClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)expandDidClick;
- (void)descriptionViewDidClickExpand;
- (void)hideTimeLabelIfNeed:(BOOL)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
