@class NSString;

@interface BDUGFlowAuthRuleDialogStyle : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *negativeText;
@property (copy, nonatomic) NSString *positiveText;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
