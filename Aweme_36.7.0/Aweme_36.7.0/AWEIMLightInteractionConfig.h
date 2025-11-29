@class NSString, NSDictionary, NSArray;

@interface AWEIMLightInteractionConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long msgType;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *sendText;
@property (copy, nonatomic) NSString *repText;
@property (copy, nonatomic) NSString *btn;
@property (copy, nonatomic) NSString *btnIconUrl;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *repDesc;
@property (copy, nonatomic) NSString *externalDesc;
@property (copy, nonatomic) NSString *repExternalDesc;
@property (copy, nonatomic) NSString *repBtn;
@property (copy, nonatomic) NSString *repToast;
@property (nonatomic) unsigned long long repMsgType;
@property (copy, nonatomic) NSString *sendHintDesc;
@property (copy, nonatomic) NSString *repSendHintDesc;
@property (copy, nonatomic) NSString *repSchema;
@property (nonatomic) unsigned long long repMode;
@property (copy, nonatomic) NSDictionary *control;
@property (copy, nonatomic) NSString *actionBarDesc;
@property (copy, nonatomic) NSString *actionBarIcon;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *emoji;
@property (nonatomic) long long dayStartTime;
@property (nonatomic) long long dayEndTime;
@property (readonly, copy, nonatomic) NSArray *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)control_ageStages;
- (id)control_libraKeys;
- (long long)control_startTime;
- (long long)control_endTime;
- (long long)control_minVersion;
- (void).cxx_destruct;

@end
