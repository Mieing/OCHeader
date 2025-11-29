@class NSString, NSArray, NSNumber, AWECoCreatorExternModel;

@interface AWECoOperationInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *profileUid;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSNumber *authorFollowerCount;
@property (retain, nonatomic) AWECoCreatorExternModel *authorExternModel;
@property (nonatomic) BOOL hasRequestVerification;
@property (copy, nonatomic) NSArray *coCreators;
@property (nonatomic) long long coCreatorNums;
@property (nonatomic) long long acceptedNums;
@property (nonatomic) long long cursor;
@property (nonatomic) double liveStatusMonitorTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coCreatorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
