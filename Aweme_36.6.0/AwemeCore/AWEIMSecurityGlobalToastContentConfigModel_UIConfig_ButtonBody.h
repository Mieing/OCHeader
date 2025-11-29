@class NSString, NSArray;

@interface AWEIMSecurityGlobalToastContentConfigModel_UIConfig_ButtonBody : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *reportValue;
@property (copy, nonatomic) NSString *nextConfigID;
@property (nonatomic) BOOL highlight;
@property (nonatomic) BOOL requireOptionSelected;
@property (copy, nonatomic) NSArray *actions;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
