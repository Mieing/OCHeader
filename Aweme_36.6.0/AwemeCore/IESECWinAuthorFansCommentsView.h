@class NSString, UIImageView, UILabel, IESECWinAuthorCommentsView;
@protocol IESECWinAuthorFansCommentsViewDelegate;

@interface IESECWinAuthorFansCommentsView : UIView <IESECWinAuthorCommentsViewDelegate>

@property (retain, nonatomic) UILabel *commentsTitleLabel;
@property (retain, nonatomic) UIImageView *commentsArrowView;
@property (retain, nonatomic) IESECWinAuthorCommentsView *commentsView;
@property (weak, nonatomic) id<IESECWinAuthorFansCommentsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapCellWithImpressionWord:(id)a0;
- (void)bindWithModelArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpConstraints;

@end
