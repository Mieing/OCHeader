@class NSArray, NSString;

@interface AWECampaignGeneralActivityButtonDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSArray *multiBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)multiBtnJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
