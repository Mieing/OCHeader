@class NSString, NSMutableArray;

@interface MMTemplateMsgScopeItem : MMObject <PBCoding, NSCopying>

@property (copy, nonatomic) NSString *scopeID;
@property (copy, nonatomic) NSString *scopeName;
@property (nonatomic) BOOL isScopeRecv;
@property (nonatomic) BOOL isShowInSetting;
@property (nonatomic) unsigned int maxValidTime;
@property (retain, nonatomic) NSMutableArray *kvList;
@property (nonatomic) unsigned int templateType;
@property (nonatomic) unsigned int tid;
@property (nonatomic) BOOL isBan;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) BOOL isAudioTemplate;
@property (nonatomic) BOOL isAcceptWithAudio;
@property (retain, nonatomic) NSString *audioTemplateUrl;
@property (nonatomic) BOOL isForceNotifyTemplate;
@property (nonatomic) BOOL isAcceptWithForceNotify;
@property (nonatomic) unsigned int serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_scopeID;
+ (void)PBArrayAdd_scopeName;
+ (void)PBArrayAdd_isScopeRecv;
+ (void)PBArrayAdd_isShowInSetting;
+ (void)PBArrayAdd_maxValidTime;
+ (void)PBArrayAdd_kvList;
+ (void)PBArrayAdd_templateType;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_isBan;
+ (void)PBArrayAdd_isAudioTemplate;
+ (void)PBArrayAdd_isAcceptWithAudio;
+ (void)PBArrayAdd_audioTemplateUrl;
+ (void)PBArrayAdd_isForceNotifyTemplate;
+ (void)PBArrayAdd_isAcceptWithForceNotify;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_serviceType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
