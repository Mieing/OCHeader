@class NSString;

@interface WAOpenSetting_SubscriptionsDetailItemModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) unsigned int templateType;
@property (nonatomic) unsigned int tid;
@property (nonatomic) long long status;
@property (nonatomic) BOOL isAudioTemplate;
@property (nonatomic) BOOL acceptAudio;
@property (nonatomic) BOOL isForceNotifyTemplate;
@property (nonatomic) BOOL isAcceptWithForceNotify;

- (void).cxx_destruct;

@end
