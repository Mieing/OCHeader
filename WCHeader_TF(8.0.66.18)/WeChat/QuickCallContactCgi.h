@class NSMutableArray;
@protocol QuickCallContactCgiDelegate;

@interface QuickCallContactCgi : WCBaseCgi

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isAddContact;
@property (retain, nonatomic) NSMutableArray *waitingUsernames;
@property (retain, nonatomic) NSMutableArray *successUsernames;
@property (weak, nonatomic) id<QuickCallContactCgiDelegate> delegate;
@property (nonatomic) BOOL isRunning;

- (id)init;
- (void)startAddContacts:(id)a0 complete:(id /* block */)a1;
- (void)startRemoveContacts:(id)a0 complete:(id /* block */)a1;
- (void)checkQueue;
- (void)handleFinishCallback;
- (BOOL)isEmpty;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
