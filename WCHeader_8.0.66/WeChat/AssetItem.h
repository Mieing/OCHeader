@class NSData;

@interface AssetItem : WXPBGeneratedMessage

@property (nonatomic) float aspectRatio;
@property (retain, nonatomic) NSData *videoClassifyResult;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (nonatomic) unsigned long long phoneTime;

+ (void)initialize;

@end
