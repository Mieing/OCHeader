@class NSString, TenpaySecureCtrl;

@interface KindaSecureCtrlItem : NSObject <MMSecureCtrItem>

@property (retain, nonatomic) TenpaySecureCtrl *m_secureCtrlItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
