@class AFDCloseFriendsMomentVideoTutorialExitConfig, NSString, AFDCloseFriendsMomentVideoTutorialButtonConfig, AFDFrequencyExitRule, AWEUserModel;

@interface AFDCloseFriendsMomentVideoTutorialConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AFDFrequencyExitRule *clickFrequencyRule;
@property (retain, nonatomic) AFDFrequencyExitRule *showFrequencyRule;
@property (copy, nonatomic) NSString *videoConfigKey;
@property (copy, nonatomic) NSString *videoType;
@property (copy, nonatomic) NSString *videoURL;
@property (copy, nonatomic) NSString *videoCoverImageURL;
@property (nonatomic) unsigned long long videoPosition;
@property (retain, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) AFDCloseFriendsMomentVideoTutorialButtonConfig *buttonConfig;
@property (retain, nonatomic) AFDCloseFriendsMomentVideoTutorialExitConfig *exitConfig;
@property (nonatomic) BOOL hasTrackedShowFrequencyRule;
@property (nonatomic) unsigned long long clickCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorJSONTransformer;
+ (id)buttonConfigJSONTransformer;
+ (id)exitConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)registerFrequencyRuleWith:(id)a0;
- (void).cxx_destruct;

@end
