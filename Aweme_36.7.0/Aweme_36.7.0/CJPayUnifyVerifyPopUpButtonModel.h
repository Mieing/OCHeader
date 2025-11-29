@class NSString, NSNumber;

@interface CJPayUnifyVerifyPopUpButtonModel : JSONModel

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *bold;
@property (copy, nonatomic) NSString *color;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
