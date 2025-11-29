@class NSString;

@interface FinderJumpInfo_SchemaInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *universalLink;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSString *appstoreLink;
@property (retain, nonatomic) NSString *androidUniversalLink;
@property (retain, nonatomic) NSString *androidAppstoreScheme;
@property (retain, nonatomic) NSString *androidPackage;
@property (retain, nonatomic) NSString *androidAppPublicKey;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setAndroidAppPublicKey:(id)a0;
- (id)androidAppPublicKey;
- (void)setAndroidPackage:(id)a0;
- (id)androidPackage;
- (void)setAndroidAppstoreScheme:(id)a0;
- (id)androidAppstoreScheme;
- (void)setAndroidUniversalLink:(id)a0;
- (id)androidUniversalLink;
- (void)setAppstoreLink:(id)a0;
- (id)appstoreLink;
- (void)setScheme:(id)a0;
- (id)scheme;
- (void)setUniversalLink:(id)a0;
- (id)universalLink;
- (id)archivedWCTValue;
- (BOOL)isEqual:(id)a0;

@end
