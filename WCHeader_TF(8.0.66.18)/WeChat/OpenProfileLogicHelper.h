@class NSString;
@protocol OpenProfileLogicHelperDelegate;

@interface OpenProfileLogicHelper : MMObject <PBMessageObserverDelegate, IStrangerContactMgrExt> {
    NSString *_ticket;
    int _source;
}

@property (weak, nonatomic) id<OpenProfileLogicHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)openProfile:(id)a0;
- (void)handleOpenProfileResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void)onStrangerContactUpdateForbidden:(id)a0;
- (void).cxx_destruct;

@end
