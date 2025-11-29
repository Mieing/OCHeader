@class CNContactStore, BDContactsBuilder;

@interface BDContactsRoutine : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) BDContactsBuilder *builder;

+ (unsigned long long)accessStatus;

- (id)allContactsWithContactFieldMask:(unsigned long long)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (void)requestAccessWithCompletion:(id /* block */)a0;

@end
