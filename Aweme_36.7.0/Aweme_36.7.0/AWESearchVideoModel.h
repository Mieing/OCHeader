@class NSDictionary;

@interface AWESearchVideoModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) NSDictionary *extraInfo;

+ (id)queryRecordModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
