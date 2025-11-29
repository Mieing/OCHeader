@class BDPCloseButton, NSString, UIView, NSArray, BDPUniqueID, NSDictionary, NSMutableArray, UILabel, NSNumber;
@protocol BDPGameJumpingView_HGDelegate;

@interface BDPGameJumpingView_HG : UIView

@property (retain, nonatomic) BDPUniqueID *sourceUniqueID;
@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) BDPCloseButton *closeButton;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *nameLabels;
@property (nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *viewStyle;
@property (retain, nonatomic) NSDictionary *query;
@property (copy, nonatomic) NSDictionary *separateQuery;
@property (copy, nonatomic) NSString *entrance;
@property (retain, nonatomic) NSArray *models;
@property (weak, nonatomic) id<BDPGameJumpingView_HGDelegate> delegate;
@property (copy, nonatomic) NSNumber *operateId;
@property (nonatomic) long long called;

+ (id)getJumpingViewParentView:(long long)a0 task:(id)a1;

- (void)showOn:(id)a0;
- (void)setSchemaQuery:(id)a0;
- (void)onStatusChangedWithState:(id)a0 errMsg:(id)a1 appName:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMainViewFrame;
- (BOOL)setMainViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStateChangeValueWithOperateId:(id)a0;
- (void)onBackgroundClick:(id)a0;
- (void)onClickCloseButton;
- (void).cxx_destruct;
- (void)hide;
- (BOOL)isShowing;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
