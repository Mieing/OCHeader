@class UITapGestureRecognizer, NSString, MMMusicMVModel, UIImageView, MMWebImageView, UIView, UILabel;
@protocol MMMusicMVRecommendTableCellDelegate;

@interface MMMusicMVRecommendTableCell : UITableViewCell {
    MMWebImageView *_webImageView;
    UIView *_lineView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_likeContainerView;
    UIImageView *_likeLogoImageView;
    UILabel *_likeCountLabel;
    UIImageView *_activedLogoImageView;
    UITapGestureRecognizer *_gesture;
}

@property (class, readonly) NSString *identifier;
@property (class, readonly) double prefferedHeight;

@property (weak, nonatomic) id<MMMusicMVRecommendTableCellDelegate> delegate;
@property (readonly, nonatomic) MMMusicMVModel *model;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)onClick;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithModel:(id)a0 songLikeCountIfMvWithBeat:(unsigned long long)a1;
- (void)onActive;
- (void)onUnactive;
- (void).cxx_destruct;

@end
