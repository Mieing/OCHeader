@class NSString;

@interface AWELuckyCatExperienceTaskInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long currentLevel;
@property (nonatomic) long long upgradeType;
@property (nonatomic) long long upgradeFrom;
@property (copy, nonatomic) NSString *upgradePopupSchema;
@property (copy, nonatomic) NSString *feData;
@property (copy, nonatomic) NSString *bubbleText;
@property (nonatomic) double bubbleInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
