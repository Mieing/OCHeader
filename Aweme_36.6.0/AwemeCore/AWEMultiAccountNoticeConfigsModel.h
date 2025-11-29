@class NSNumber, NSString;

@interface AWEMultiAccountNoticeConfigsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *exitStrategyM;
@property (retain, nonatomic) NSNumber *exitStrategyX;
@property (retain, nonatomic) NSNumber *exitStrategyN;
@property (retain, nonatomic) NSNumber *requestFrequencyTimeIntervalMinute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
