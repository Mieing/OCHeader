@class UIImage, NSString, AWEURLModel;
@protocol AWENearbyCardModel;

@interface AWENearbyImgAutoScrollModel : NSObject

@property (retain, nonatomic) UIImage *showImg;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) id<AWENearbyCardModel> cardModel;
@property (nonatomic) BOOL showLoadingLabel;
@property (retain, nonatomic) AWEURLModel *webImgUrl;
@property (retain, nonatomic) UIImage *webImgPlaceholder;
@property (copy, nonatomic) id /* block */ adjustUIImageView;
@property (copy, nonatomic) id /* block */ webImgeLoadCompleted;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
