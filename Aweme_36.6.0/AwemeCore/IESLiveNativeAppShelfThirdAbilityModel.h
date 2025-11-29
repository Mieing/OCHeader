@class NSString;

@interface IESLiveNativeAppShelfThirdAbilityModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL showStatus;
@property (nonatomic) BOOL abilityStatus;
@property (copy, nonatomic) id /* block */ onShow;
@property (copy, nonatomic) id /* block */ onClick;

+ (id)defaultModelType:(unsigned long long)a0;

- (void).cxx_destruct;

@end
