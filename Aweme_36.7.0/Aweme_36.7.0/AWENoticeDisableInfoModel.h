@class NSString, NSDictionary, NSArray;

@interface AWENoticeDisableInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *disableDetails;
@property (copy, nonatomic) NSDictionary *disableMapDetails;
@property (copy, nonatomic) NSArray *disableDialogButtons;
@property (copy, nonatomic) NSString *disableDialogTitle;
@property (copy, nonatomic) NSString *disableDialogContent;
@property (nonatomic) BOOL hasEntrance;

+ (id)disableDialogButtonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isModularizedDisabled;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
