@class NSString, NSData, FinderJumpInfo;

@interface FinderNotification : WXPBGeneratedMessage <WCTColumnCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *miniappName;
@property (retain, nonatomic) NSData *extInfo;
@property (retain, nonatomic) NSString *udfKvJson;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned int notificationType;
@property (retain, nonatomic) NSString *commUdfKvJson;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setCommUdfKvJson:(id)a0;
- (id)commUdfKvJson;
- (void)setNotificationType:(unsigned int)a0;
- (unsigned int)notificationType;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setUdfKvJson:(id)a0;
- (id)udfKvJson;
- (void)setExtInfo:(id)a0;
- (id)extInfo;
- (void)setMiniappName:(id)a0;
- (id)miniappName;
- (void)setLink:(id)a0;
- (id)link;
- (void)setSubType:(unsigned int)a0;
- (unsigned int)subType;
- (void)setContent:(id)a0;
- (id)content;
- (void)setTitle:(id)a0;
- (id)title;
- (id)archivedWCTValue;

@end
