@class NSString, NSMutableArray, MpEcsJumpInfo;

@interface BizServiceMenuButton : WXPBGeneratedMessage

@property (nonatomic) unsigned int id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSMutableArray *subButtonList;
@property (nonatomic) unsigned int acttype;
@property (retain, nonatomic) NSString *nativeUrl;
@property (nonatomic) unsigned int showIconType;
@property (retain, nonatomic) MpEcsJumpInfo *menuEcsData;

+ (void)initialize;

- (void)setMenuEcsData:(id)a0;
- (id)menuEcsData;
- (void)setShowIconType:(unsigned int)a0;
- (unsigned int)showIconType;
- (void)setNativeUrl:(id)a0;
- (id)nativeUrl;
- (void)setActtype:(unsigned int)a0;
- (unsigned int)acttype;
- (void)setSubButtonList:(id)a0;
- (id)subButtonList;
- (void)setValue:(id)a0;
- (id)value;
- (void)setKey:(id)a0;
- (id)key;
- (void)setName:(id)a0;
- (id)name;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setId:(unsigned int)a0;
- (unsigned int)id;

@end
