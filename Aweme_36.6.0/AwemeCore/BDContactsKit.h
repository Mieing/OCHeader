@class BDContactsRoutine, NSArray;

@interface BDContactsKit : NSObject

@property (retain, nonatomic) BDContactsRoutine *routine;
@property (nonatomic) unsigned long long limitCount;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long fieldsMask;

+ (unsigned long long)accessStatus;

- (long long)localContactsPermitCount;
- (void)requestAccessOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)loadContactsOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestAccess:(id /* block */)a0;
- (void)loadContacts:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
