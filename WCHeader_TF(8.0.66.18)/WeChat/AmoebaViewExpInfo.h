@class NSString, NSDictionary, NSArray;

@interface AmoebaViewExpInfo : NSObject

@property (nonatomic) unsigned long long viewHash;
@property (nonatomic) unsigned long long expType;
@property (retain, nonatomic) NSString *viewUniqueId;
@property (retain, nonatomic) NSDictionary *viewParams;
@property (retain, nonatomic) NSArray *routeRules;
@property (nonatomic) unsigned long long time;
@property (nonatomic) unsigned long long reportPolicy;

- (id)init;
- (void).cxx_destruct;

@end
