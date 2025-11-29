@class NSString;

@interface AWEIMCodeGenExitSettingsModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double exitdays;
@property (nonatomic) long long threshold;
@property (copy, nonatomic) NSString *dimension;
@property (copy, nonatomic) NSString *exitscope;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
