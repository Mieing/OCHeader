@class UIImageView, UILabel, MMUIButton;
@protocol WCMomentsScrollActionSheetBizOriginalArticleRowViewDelegate;

@interface WCMomentsScrollActionSheetBizOriginalArticleRowView : MMUIView

@property (retain, nonatomic) MMUIButton *backgroundButton;
@property (retain, nonatomic) UIImageView *subscriptionsImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<WCMomentsScrollActionSheetBizOriginalArticleRowViewDelegate> delegate;

+ (double)rowViewHeight;

- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)onTappedRowInfo;
- (void).cxx_destruct;

@end
