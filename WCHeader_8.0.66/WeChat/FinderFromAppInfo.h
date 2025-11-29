@class NSString;

@interface FinderFromAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *link;
@property (nonatomic) unsigned long long uiStyle;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *sdkExtInfo;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setSdkExtInfo:(id)a0;
- (id)sdkExtInfo;
- (void)setSource:(unsigned int)a0;
- (unsigned int)source;
- (void)setExtInfo:(id)a0;
- (id)extInfo;
- (void)setUiStyle:(unsigned long long)a0;
- (unsigned long long)uiStyle;
- (void)setLink:(id)a0;
- (id)link;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setIcon:(id)a0;
- (id)icon;
- (void)setAppid:(id)a0;
- (id)appid;
- (id)archivedWCTValue;

@end
