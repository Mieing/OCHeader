@class NSString, UIButton;
@protocol WCResourceHeaderViewDelegate;

@interface WCResourceCollectionResuableView : UICollectionReusableView

@property (retain, nonatomic) NSString *viewTitle;
@property (weak, nonatomic) id<WCResourceHeaderViewDelegate> delegate;
@property (retain, nonatomic) UIButton *selectButton;
@property (nonatomic) unsigned long long sectionIndex;

+ (id)identifier;

- (void)layoutSubviews;
- (void)updateWithViewTitle:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)onClickButton;
- (void).cxx_destruct;

@end
