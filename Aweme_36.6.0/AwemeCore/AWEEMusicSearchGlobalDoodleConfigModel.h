@class NSString, NSDictionary, AWESearchFeelGoodEntranceIconModel;

@interface AWEEMusicSearchGlobalDoodleConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showFeedback;
@property (copy, nonatomic) NSString *feedbackTitle;
@property (copy, nonatomic) NSString *feedbackSubtitle;
@property (copy, nonatomic) NSDictionary *feedbackIntentInfo;
@property (retain, nonatomic) AWESearchFeelGoodEntranceIconModel *feedbackEntranceIcon;
@property (nonatomic) long long feedbackShowTipsType;
@property (nonatomic) double feedbackShowTipsDurationMS;
@property (nonatomic) double feedbackShowTipsStartDelayMS;
@property (nonatomic) long long feedbackEntranceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
