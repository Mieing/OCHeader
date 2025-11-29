@class NSString;

@interface CJPayDividedButtonInfo : JSONModel

@property (copy, nonatomic) NSString *buttonLabel;
@property (copy, nonatomic) NSString *amountMsg;
@property (copy, nonatomic) NSString *backgroundImgUrl;
@property (copy, nonatomic) NSString *buttonAction;
@property (copy, nonatomic) NSString *payIndexToSelect;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
