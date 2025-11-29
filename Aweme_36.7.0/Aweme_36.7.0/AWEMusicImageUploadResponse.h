@class NSArray, NSDictionary;

@interface AWEMusicImageUploadResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
