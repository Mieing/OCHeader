@class NSString, NSDictionary;

@interface AWESearchVisionImageModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *imageId;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *sourceSchema;
@property (copy, nonatomic) NSDictionary *extroInfo;
@property (copy, nonatomic) NSDictionary *imageDetailParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
