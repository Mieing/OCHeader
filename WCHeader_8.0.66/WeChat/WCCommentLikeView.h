@class UIImageView, UILabel;

@interface WCCommentLikeView : MMUIButton

@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumbLabel;
@property (nonatomic) unsigned long long type;

- (id)init;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)updateSelectedStatus:(BOOL)a0 isCommentClose:(BOOL)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;

@end
