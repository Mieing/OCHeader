@class NSString;

@interface AWEMaskInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL showMask;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;

+ (id)maskInfoTypeJSONTransformer;
+ (id)maskInfoStatusTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
