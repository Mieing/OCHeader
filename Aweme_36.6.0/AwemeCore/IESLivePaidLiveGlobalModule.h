@class NSString;

@interface IESLivePaidLiveGlobalModule : IESLiveModule <IESLivePaidLiveGlobalModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)watchPaidLiveStatusForViewRight:(unsigned long long)a0;
- (id)VSPrivilegeGlobalInterfaceImpl;
- (id)shareTicketInterface;
- (id)paidTraceImpl;
- (id)createLiveShowTryTimeViewWithVisibleType:(unsigned long long)a0 selectedUsers:(id)a1 isShowNotPreviewOption:(BOOL)a2 selectedBlock:(id /* block */)a3;

@end
