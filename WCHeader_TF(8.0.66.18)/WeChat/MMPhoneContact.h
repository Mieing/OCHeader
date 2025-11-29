@class NSString, NSMutableDictionary;

@interface MMPhoneContact : NSObject

@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSString *nicknamePinYin;
@property (readonly, nonatomic) NSString *nicknamePinYinShort;
@property (readonly, nonatomic) NSMutableDictionary *phoneWithLabels;
@property (readonly, nonatomic) NSMutableDictionary *phoneToMd5Dic;

+ (id)polyPhones;

- (id)initWithAddressBook:(id)a0;
- (void)addAddressBook:(id)a0;
- (void)InternalAddNewAddressBook:(id)a0;
- (void)addFirstAddressBook:(id)a0;
- (id)getFamilyNamePinYinShort:(id)a0;
- (void).cxx_destruct;

@end
