@class UIImage, WCDataItem;

@interface WCLikeButton : MMUIButton {
    BOOL m_likeOperating;
}

@property (nonatomic) double iconSize;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *likedImage;
@property (retain, nonatomic) UIImage *disabledImage;
@property (retain, nonatomic) UIImage *normalHighlightedImage;
@property (retain, nonatomic) UIImage *likedHighlightedImage;
@property (retain, nonatomic) UIImage *Spring_normalImage;
@property (retain, nonatomic) UIImage *Spring_likedImage;
@property (retain, nonatomic) UIImage *Spring_disabledImage;
@property (retain, nonatomic) UIImage *Spring_normalHighlightedImage;
@property (retain, nonatomic) UIImage *Spring_likedHighlightedImage;
@property (retain, nonatomic) UIImage *Spring_normalImagePlaceholder;
@property (nonatomic) BOOL isEnhanceInteractionEnabled;
@property (nonatomic) BOOL isShowLikeCount;
@property (nonatomic) long long browseScene;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (copy, nonatomic) id /* block */ likeOpBlock;
@property (copy, nonatomic) id /* block */ updateOpBlock;

- (void)updateLikeBtn;
- (void)updateLikeBtnWithLikeFlag:(BOOL)a0;
- (id)initWithDataItem:(id)a0 params:(id)a1;
- (void)LikeBtnEnlarge;
- (void)LikeBtnReduce;
- (void)LikeBtnReduceEnd;
- (void)performUnLikeWithoutAnimation;
- (void)onLikeFriend;
- (struct CGSize { double x0; double x1; })longerTitleSize;
- (long long)displayLikeCount:(BOOL)a0;
- (BOOL)isSpringStyle;
- (void)Spring_updateLikeBtnWithLikeFlag:(BOOL)a0;
- (void).cxx_destruct;

@end
