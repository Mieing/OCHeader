@class BDContactsDataExtractors, CNContactStore, NSArray;

@interface BDContactsBuilder : NSObject

@property (retain, nonatomic) BDContactsDataExtractors *extractor;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (retain, nonatomic) NSArray *sortDescriptors;

- (id)contactsWithFieldMask:(unsigned long long)a0;
- (void)filterContacts:(id)a0;
- (void)sortContacts:(id)a0;
- (id)contactWithCNContact:(id)a0 fieldMask:(unsigned long long)a1;
- (id)fetchKeysFromContactField:(unsigned long long)a0;
- (id)contactListWithAllContacts:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
