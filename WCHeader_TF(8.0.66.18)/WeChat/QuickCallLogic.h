@class QuickCallContactCgi, NSMutableArray, NSMutableSet;
@protocol QuickCallLogicDelegate;

@interface QuickCallLogic : NSObject <IContactMgrExt>

@property (retain, nonatomic) QuickCallContactCgi *quickCallCgi;
@property (retain, nonatomic) NSMutableArray *contacts;
@property (retain, nonatomic) NSMutableSet *contactSet;
@property (weak, nonatomic) id<QuickCallLogicDelegate> delegate;
@property (nonatomic) long long lastContactCount;

- (id)init;
- (void)dealloc;
- (long long)quickCallContactCount;
- (id)quickCallContactAtIndex:(long long)a0;
- (id)quickCallContacts;
- (void)addContacts:(id)a0 complete:(id /* block */)a1;
- (void)removeContacts:(id)a0 complete:(id /* block */)a1;
- (BOOL)shouldShowWidgetEducate;
- (void)loadQuickCallContacts;
- (void)onModifyContact:(id)a0;
- (void).cxx_destruct;

@end
