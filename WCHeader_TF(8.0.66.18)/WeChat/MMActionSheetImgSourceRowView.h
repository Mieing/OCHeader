@class UIButton, UIImageView, UILabel;
@protocol MMActionSheetImgSourceRowViewDelegate;

@interface MMActionSheetImgSourceRowView : MMUIView

@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<MMActionSheetImgSourceRowViewDelegate> delegate;

+ (double)rowViewHeight;

- (id)init;
- (void)setupAllSubviews;
- (void)layoutSubviews;
- (void)onTappedRowImgSource;
- (void).cxx_destruct;

@end
