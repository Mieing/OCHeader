@class NSString, AWEURLModel;

@interface AWENearbyUtilityMaskModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *normalStyleText;
@property (retain, nonatomic) AWEURLModel *normalStyleIconURLModel;
@property (copy, nonatomic) NSString *specialStyleText;
@property (retain, nonatomic) AWEURLModel *specialStyleIconURLModel;
@property (nonatomic) long long type;
@property (nonatomic) long long count;

+ (id)normalStyleIconURLModelJSONTransformer;
+ (id)specialStyleIconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
