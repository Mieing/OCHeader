@class NSString, AWELuckyCatPendantCountDownTask, AWELuckyCatPendant;

@interface AWELuckyCatPendantTaskConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long taskType;
@property (retain, nonatomic) AWELuckyCatPendantCountDownTask *countDownTask;
@property (retain, nonatomic) AWELuckyCatPendant *pendant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
