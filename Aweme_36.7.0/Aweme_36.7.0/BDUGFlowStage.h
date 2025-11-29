@class NSString, NSDictionary;

@interface BDUGFlowStage : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) double createTimeStamp;
@property (nonatomic) double costTime;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
