@class HTSLiveImageProps, NSString, HTSLiveCardProps, HTSLiveBasicProps, HTSLiveTaskProps;

@interface HTSLiveBannerView : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *component;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) BOOL isKeepLast;
@property (nonatomic) long long subBannerId;
@property (copy, nonatomic) NSString *earImage;
@property (retain, nonatomic) HTSLiveTaskProps *taskProps;
@property (nonatomic) BOOL hasTaskProps;
@property (retain, nonatomic) HTSLiveImageProps *imageProps;
@property (nonatomic) BOOL hasImageProps;
@property (retain, nonatomic) HTSLiveBasicProps *basicProps;
@property (nonatomic) BOOL hasBasicProps;
@property (retain, nonatomic) HTSLiveCardProps *cardProps;
@property (nonatomic) BOOL hasCardProps;

+ (id)descriptor;

@end
