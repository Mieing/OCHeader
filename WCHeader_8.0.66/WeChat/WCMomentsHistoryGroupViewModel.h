@class NSString, NSArray, ContactsDataLogic;

@interface WCMomentsHistoryGroupViewModel : NSObject <ContactsDataLogicDelegate>

@property (retain, nonatomic) ContactsDataLogic *contactDataLogic;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long m_commonSearchScene;
@property (readonly, nonatomic) unsigned long long contactDataScene;
@property (readonly, nonatomic) unsigned long long historyGroupCount;
@property (readonly, nonatomic) NSArray *historyGroupContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
