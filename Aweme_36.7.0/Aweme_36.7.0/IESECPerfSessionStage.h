@class NSString, NSDictionary;

@interface IESECPerfSessionStage : NSObject

@property (copy, nonatomic) NSString *stageName;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSDictionary *data;

- (id)formatJsonData;
- (id)initWithStageName:(id)a0 stageType:(id)a1 timestamp:(double)a2 data:(id)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeExtraData:(id)a0;

@end
