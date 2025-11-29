@class NSString, CContactVerifyLogic;

@interface LiteAppJsApiOpenWeRun : LiteAppJsApi <contactVerifyLogicDelegate> {
    CContactVerifyLogic *m_oLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
