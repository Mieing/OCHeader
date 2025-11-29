@class NSString, NSDictionary, NSArray, BDMannorAdDataModel;

@interface BDMannorAdTaskContext : NSObject

@property (copy, nonatomic) NSString *clickType;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSArray *customizedClickPriority;
@property (retain, nonatomic) BDMannorAdDataModel *adData;

- (void).cxx_destruct;

@end
