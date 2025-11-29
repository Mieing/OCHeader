@class NSString, NSDictionary, AWELuckyCatCapsuleAreaModel;

@interface AWELuckyCatPropBoxInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskType;
@property (nonatomic) BOOL readSpeedUp;
@property (nonatomic) BOOL noticeWithPendant;
@property (copy, nonatomic) NSDictionary *popup;
@property (copy, nonatomic) NSDictionary *useGuide;
@property (retain, nonatomic) AWELuckyCatCapsuleAreaModel *capsuleArea;
@property (copy, nonatomic) NSString *propStatus;
@property (copy, nonatomic) NSString *scrollTaskKey;
@property (nonatomic) unsigned long long propActTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
