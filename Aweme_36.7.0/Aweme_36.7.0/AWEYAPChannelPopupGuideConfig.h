@class AWEYAPChannelPopupGuideLynxCard, NSString, NSDictionary, UIImage;

@interface AWEYAPChannelPopupGuideConfig : AWEBaseApiModel

@property (nonatomic) long long mainType;
@property (copy, nonatomic) NSString *mainURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *positiveButtonTitle;
@property (copy, nonatomic) NSString *positiveScheme;
@property (copy, nonatomic) NSString *leftSideButtonTitle;
@property (retain, nonatomic) AWEYAPChannelPopupGuideLynxCard *lynxCard;
@property (retain, nonatomic) UIImage *mainImage;
@property (copy, nonatomic) NSDictionary *mainLottieJson;
@property (copy, nonatomic) NSDictionary *imageDic;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
