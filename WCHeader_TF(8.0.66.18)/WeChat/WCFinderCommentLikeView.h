@class WCFinderCommentLikeUIConfig, UIImageView, UILabel;

@interface WCFinderCommentLikeView : MMUIButton

@property (retain, nonatomic) WCFinderCommentLikeUIConfig *config;
@property (weak, nonatomic) UIImageView *likeImageView;
@property (weak, nonatomic) UILabel *likeNumbLabel;
@property (nonatomic) BOOL isLiked;

- (id)initWithConfig:(id)a0;
- (void)setUpUI;
- (void)updateCommenLikeStaus:(BOOL)a0 isCommentClose:(BOOL)a1 likeNumber:(unsigned long long)a2;
- (void).cxx_destruct;

@end
