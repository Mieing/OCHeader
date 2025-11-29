@class NSString;

@interface MMWebViewReportStatMgr : MMUserService <MMServiceProtocol>

@property (nonatomic) unsigned long long m_iMenuActionRet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reportWebPageInfoWhenForwardMsgOrFav:(id)a0 actionType:(unsigned long long)a1 fromScene:(unsigned long long)a2 ret:(unsigned long long)a3;

@end
