@class NSString;

@interface IESLLPOISeckillInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityID;
@property (nonatomic) long long endTime;
@property (nonatomic) long long endTimeCountDown;
@property (nonatomic) long long startTime;
@property (nonatomic) long long status;
@property (nonatomic) long long warmUpCountDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
