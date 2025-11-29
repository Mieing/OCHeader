@class NSArray, NSDictionary;

@interface IESGurdSettingsUpdateConfig : NSObject

@property (copy, nonatomic) NSArray *supportCustomRequestAks;
@property (copy, nonatomic) NSDictionary *requestUpdateConfig;
@property (copy, nonatomic) NSDictionary *preUpdateConfig;

+ (id)configWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
