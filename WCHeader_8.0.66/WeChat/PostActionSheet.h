@class NSString;

@interface PostActionSheet : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *universalLink;
@property (retain, nonatomic) NSString *appstoreScheme;
@property (retain, nonatomic) NSString *androidUniversalLink;
@property (retain, nonatomic) NSString *androidAppstoreScheme;
@property (retain, nonatomic) NSString *androidPackage;
@property (retain, nonatomic) NSString *androidAppPublicKey;

+ (void)initialize;

- (void)setAndroidAppPublicKey:(id)a0;
- (id)androidAppPublicKey;
- (void)setAndroidPackage:(id)a0;
- (id)androidPackage;
- (void)setAndroidAppstoreScheme:(id)a0;
- (id)androidAppstoreScheme;
- (void)setAndroidUniversalLink:(id)a0;
- (id)androidUniversalLink;
- (void)setAppstoreScheme:(id)a0;
- (id)appstoreScheme;
- (void)setUniversalLink:(id)a0;
- (id)universalLink;
- (void)setValue:(id)a0;
- (id)value;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setDesc:(id)a0;
- (id)desc;
- (void)setIcon:(id)a0;
- (id)icon;
- (void)setTitle:(id)a0;
- (id)title;

@end
