@class AWELiveShelfElementTextModel, NSString, NSDictionary, NSNumber;

@interface AWELiveShelfCardElementLotteryModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasLottery;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *drawTime;
@property (copy, nonatomic) NSNumber *candidateStatus;
@property (retain, nonatomic) AWELiveShelfElementTextModel *hintText;
@property (copy, nonatomic) NSDictionary *trackingParams;
@property (copy, nonatomic) NSString *taskPageSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
