@class PBCMessageWrap, NSString, PBCContact;

@interface PBSessionInfo : NSObject <PBCoding>

@property (retain, nonatomic) PBCContact *contact;
@property (retain, nonatomic) PBCMessageWrap *message;
@property (nonatomic) unsigned int atMeCount;
@property (nonatomic) BOOL showUnreadCountAsRedDot;
@property (nonatomic) unsigned int greenLabelType;
@property (nonatomic) unsigned int newInvCount;
@property (nonatomic) BOOL newInvApprove;
@property (nonatomic) BOOL bNeedContactVerify;
@property (nonatomic) unsigned int transferCount;
@property (nonatomic) unsigned int aaCount;
@property (nonatomic) unsigned int exclusiveHbCount;
@property (retain, nonatomic) NSString *updatableMsgDigest;
@property (nonatomic) unsigned int newNotifyMsgCount;
@property (nonatomic) unsigned int brandNotifyType;
@property (copy, nonatomic) NSString *brandNotifyPrefixName;
@property (nonatomic) BOOL bBrandNotifyNoPrefixName;
@property (nonatomic) BOOL bSpecialAttention;
@property (nonatomic) BOOL bGroupUndoneFlag;
@property (nonatomic) unsigned long long brandAffMsgId;
@property (nonatomic) long long referMsgSvrId;
@property (retain, nonatomic) NSString *referPartXML;
@property (nonatomic) unsigned int ecsUnhandledGiftCount;
@property (nonatomic) unsigned int ecsGiftRedLabelType;
@property (nonatomic) unsigned int ecsLastHandleGiftTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_message;
+ (void)PBArrayAdd_atMeCount;
+ (void)PBArrayAdd_showUnreadCountAsRedDot;
+ (void)PBArrayAdd_greenLabelType;
+ (void)PBArrayAdd_newInvCount;
+ (void)PBArrayAdd_newInvApprove;
+ (void)PBArrayAdd_bNeedContactVerify;
+ (void)PBArrayAdd_transferCount;
+ (void)PBArrayAdd_aaCount;
+ (void)PBArrayAdd_newNotifyMsgCount;
+ (void)PBArrayAdd_brandNotifyType;
+ (void)PBArrayAdd_brandNotifyPrefixName;
+ (void)PBArrayAdd_bBrandNotifyNoPrefixName;
+ (void)PBArrayAdd_bGroupUndoneFlag;
+ (void)PBArrayAdd_exclusiveHbCount;
+ (void)PBArrayAdd_bSpecialAttention;
+ (void)PBArrayAdd_updatableMsgDigest;
+ (void)PBArrayAdd_brandAffMsgId;
+ (void)PBArrayAdd_referMsgSvrId;
+ (void)PBArrayAdd_referPartXML;
+ (void)PBArrayAdd_ecsUnhandledGiftCount;
+ (void)PBArrayAdd_ecsGiftRedLabelType;
+ (void)PBArrayAdd_ecsLastHandleGiftTime;
+ (void)initialize;

@end
