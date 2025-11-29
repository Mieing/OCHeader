@class NSString, AWELuckyCatPendantAdFeedConfigModel;

@interface AWELuckyCatAdCollectTaskModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL playOpenGuide;
@property (nonatomic) long long awardAmount;
@property (nonatomic) BOOL canGetAward;
@property (retain, nonatomic) AWELuckyCatPendantAdFeedConfigModel *adFeedConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
