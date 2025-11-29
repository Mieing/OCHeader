@class NSString;

@interface WCPaySimpleUserSetPassGuideInfo : MMObject

@property (retain, nonatomic) NSString *m_nsGuideWording;
@property (retain, nonatomic) NSString *m_nsLeftButtonWording;
@property (retain, nonatomic) NSString *m_nsRightButtonWording;
@property (nonatomic) unsigned int m_uiSendPwdMsg;

+ (id)GenFromDictionary:(id)a0;

- (BOOL)isShowSetPasswordAlert;
- (id)getGuideWording;
- (id)getCancelWording;
- (id)getConfirmWording;
- (void).cxx_destruct;

@end
