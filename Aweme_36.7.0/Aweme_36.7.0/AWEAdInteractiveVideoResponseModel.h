@class NSString, NSNumber, AWEAdInteractiveVideoResponseDataModel;

@interface AWEAdInteractiveVideoResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) AWEAdInteractiveVideoResponseDataModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
