@class NSString;

@interface CMailContact : NSObject <NSCoding>

@property (nonatomic) unsigned int freq;
@property (nonatomic) unsigned int sort;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *addr;
@property (nonatomic) unsigned long long uin;

+ (id)contactFromXMContact:(id)a0;
+ (id)contactsFromXMContacts:(id)a0;
+ (id)xmContactDatasFromContacts:(id)a0;

- (id)init;
- (id)xmContactData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
