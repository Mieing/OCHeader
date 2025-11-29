@class NSObject, WAPlateLabel, UIImageView, NSString, UILabel, NSMutableArray, WAPlateItem;
@protocol WAPlateInputViewDelegate;

@interface WAPlateInputView : MMUIView <WAPlateLabelDelegate>

@property (retain, nonatomic) NSMutableArray *labelArr;
@property (retain, nonatomic) WAPlateLabel *lastLabel;
@property (retain, nonatomic) UILabel *dotLabel;
@property (retain, nonatomic) UIImageView *dotImg;
@property (retain, nonatomic) WAPlateItem *currentItem;
@property (weak, nonatomic) NSObject<WAPlateInputViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)genPlateLabelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1 tag:(long long)a2;
- (void)createSubViewsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadPlateItem:(id)a0;
- (void)tapLabelClick:(id)a0;
- (void)becomeFoucsLabelWithIdx:(long long)a0;
- (void)didInputPlateLabel:(id)a0 buttonType:(unsigned long long)a1;
- (void)nextLabel:(id)a0;
- (void)deleteLabel:(id)a0;
- (BOOL)disableSpecialBtn:(id)a0;
- (BOOL)checkCanFinishInput;
- (void)showToastWithText:(id)a0;
- (void).cxx_destruct;

@end
