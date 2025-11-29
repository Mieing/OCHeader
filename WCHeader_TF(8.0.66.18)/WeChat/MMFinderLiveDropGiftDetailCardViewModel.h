@class UIImage, NSString;

@interface MMFinderLiveDropGiftDetailCardViewModel : NSObject

@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *subDesc;
@property (retain, nonatomic) NSString *giftImgUrl;
@property (retain, nonatomic) NSString *coinImgUrl;
@property (retain, nonatomic) NSString *coinSum;
@property (retain, nonatomic) Class cardViewClazz;

+ (id)defaultForOpenGiftDetailCardViewUnavailable;
+ (id)defaultForOpenGiftDetailCardViewForAnchor;
+ (id)defaultForFirstOpenGiftDetailCardViewForAudience;

- (void).cxx_destruct;

@end
