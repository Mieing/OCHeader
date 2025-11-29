@class NSString, NSDictionary;

@interface FurionMonitorInputData : NSObject

@property (copy, nonatomic) NSString *runKey;
@property (copy, nonatomic) NSString *enterType;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
