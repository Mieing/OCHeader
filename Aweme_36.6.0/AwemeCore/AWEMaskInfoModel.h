@class NSString;

@interface AWEMaskInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL showMask;
@property (nonatomic) unsigned long long maskInfoType;
@property (nonatomic) unsigned long long maskInfoStatusType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *lableContent;

+ (id)maskInfoTypeJSONTransformer;
+ (id)maskInfoStatusTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
