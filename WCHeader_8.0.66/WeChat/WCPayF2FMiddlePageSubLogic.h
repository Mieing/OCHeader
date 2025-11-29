@class WCPayControlData, NSString, WCPayF2FDynamicCodeCgi;
@protocol WCPayF2FMiddlePageSubLogicDelegate;

@interface WCPayF2FMiddlePageSubLogic : WCPaySubLogic <WCPayF2FDynamicCodeCgiDelegate>

@property (retain, nonatomic) WCPayF2FDynamicCodeCgi *m_f2fDynamicCodeCgi;
@property (retain, nonatomic) WCPayControlData *m_data;
@property (weak) id<WCPayF2FMiddlePageSubLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
