@class UIImage;

@interface WCLikeButtonParams : NSObject

@property (nonatomic) double iconWidth;
@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *likedImage;
@property (retain, nonatomic) UIImage *disabledImage;
@property (retain, nonatomic) UIImage *normalHighlightedImage;
@property (retain, nonatomic) UIImage *likedHighlightedImage;
@property (retain, nonatomic) UIImage *Spring_normalImage;
@property (retain, nonatomic) UIImage *Spring_likedImage;
@property (retain, nonatomic) UIImage *Spring_disabledImage;
@property (retain, nonatomic) UIImage *Spring_normalHighlightedImage;
@property (retain, nonatomic) UIImage *Spring_likedHighlightedImage;
@property (nonatomic) BOOL isEnhanceInteractionEnabled;
@property (nonatomic) BOOL isShowLikeCount;
@property (nonatomic) long long browseScene;

+ (id)defaultParams;

- (void).cxx_destruct;

@end
