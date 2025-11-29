@class CSJStarView, UIView, UITapGestureRecognizer, CSJAdSlot, NSString, UIImageView, CSJMaterialMeta, UILabel;
@protocol CSJCSJVideoTopMaskClickDelegate;

@interface CSJVideoTopMask : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CSJStarView *starView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *subviewsTapGesture;
@property (copy, nonatomic) NSString *clickTypeString;
@property (nonatomic) long long starCount;
@property (weak, nonatomic) id<CSJCSJVideoTopMaskClickDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)c_xyDict;
- (id)initWithMaterialMeta:(id)a0 slot:(id)a1;
- (void)buildUpView;
- (void)addGesture;
- (void)maskTapped:(id)a0;
- (void)subViewsTapped:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;

@end
