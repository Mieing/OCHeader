@class NSString;

@interface IESECGoodsQualificationActivity : MTLModel <MTLJSONSerializing>

@property (nonatomic) double campaignCurrentTime;
@property (nonatomic) double initTimeinterval;
@property (nonatomic) unsigned long long campaignType;
@property (copy, nonatomic) NSString *campaignID;
@property (nonatomic) double campaignPreBeginTime;
@property (nonatomic) double campaignBeginTime;
@property (nonatomic) double campaignEndTime;
@property (nonatomic) unsigned long long campaignStatus;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
