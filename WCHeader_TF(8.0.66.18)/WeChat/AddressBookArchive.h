@class NSString, NSMutableSet;

@interface AddressBookArchive : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableSet *phones;
@property (retain, nonatomic) NSMutableSet *emails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_phones;
+ (void)PBArrayAdd_emails;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
