@class NSString;

@interface AWECodeGenEffectInflowEffectModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL isFavorited;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *effectSourceId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
