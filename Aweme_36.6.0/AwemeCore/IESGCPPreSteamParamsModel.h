@class NSString, NSDictionary;

@interface IESGCPPreSteamParamsModel : NSObject

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *enterSource;
@property (copy, nonatomic) NSString *componentType;
@property (copy, nonatomic) NSString *clickArea;
@property (copy, nonatomic) NSDictionary *extraData;

- (id)initWithPreStreamInnerParams:(id)a0;
- (void).cxx_destruct;

@end
