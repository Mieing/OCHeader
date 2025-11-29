@class NSString;

@interface CJPayBindCardSetPasswordRetainInfo : JSONModel

@property (copy, nonatomic) NSString *isNeedRetain;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSString *buttonMsg;
@property (copy, nonatomic) NSString *buttonLeftMsg;
@property (copy, nonatomic) NSString *buttonRightMsg;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
