@class WCFinderContact, UIView, NSMutableArray, UIButton;
@protocol WCFinderMemberNotifySelectViewDelegate;

@interface WCFinderMemberNotifySelectView : UIView

@property (weak, nonatomic) UIButton *selectButton;
@property (weak, nonatomic) UIView *selectLine;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (nonatomic) unsigned long long currentSelectType;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) double buttonTotalWidthSize;
@property (nonatomic) long long selectTypeCount;
@property (nonatomic) long long selectInitialIndex;
@property (weak, nonatomic) id<WCFinderMemberNotifySelectViewDelegate> delegate;

+ (id)getNotifySelectButtonTitleWithIndex:(unsigned long long)a0;
+ (double)selectViewWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contact:(id)a1;
- (void)setUpUI;
- (BOOL)isAccessibilityElement;
- (void)layoutUI;
- (void)clickSelectButton:(id)a0;
- (void)setSelectButton:(id)a0 isTriggerByUser:(BOOL)a1;
- (void)setSelectType:(unsigned long long)a0;
- (void)setSelectType:(unsigned long long)a0 isTriggerByUser:(BOOL)a1;
- (long long)getUnreadCountFromRedDotLabelByType:(unsigned long long)a0;
- (void)setUnreadCount:(unsigned long long)a0 type:(unsigned long long)a1;
- (void)clearUnreadCountWithType:(unsigned long long)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
