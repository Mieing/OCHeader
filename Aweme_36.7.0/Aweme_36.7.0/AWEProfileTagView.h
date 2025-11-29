@class AWEProfilePersonalTagModel, NSString, UIView;

@interface AWEProfileTagView : UIButton

@property (retain, nonatomic) UIView *accessView;
@property (retain, nonatomic) AWEProfilePersonalTagModel *tagModel;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *accessText;

+ (id)commonTrackerParams:(id)a0 userID:(id)a1 showText:(id)a2;

- (void)setupUIWithModel:(id)a0;
- (void)refreshColorAndImage;
- (void)onClickTagButton:(id)a0;
- (void)addAccessView;
- (id)defaultBtnImage;
- (id)scaleToSize:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTagModel:(id)a0 userID:(id)a1 accessText:(id)a2;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isCurrentUser;

@end
