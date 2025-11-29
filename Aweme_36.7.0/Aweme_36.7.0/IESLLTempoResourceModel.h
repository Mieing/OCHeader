@class NSString, NSDictionary;

@interface IESLLTempoResourceModel : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *minVersion;
@property (retain, nonatomic) NSDictionary *uiTemplate;
@property (copy, nonatomic) NSString *jsRuntime;
@property (nonatomic) long long geckoVersion;

- (void).cxx_destruct;

@end
