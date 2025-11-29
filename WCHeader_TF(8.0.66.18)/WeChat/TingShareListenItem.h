@class MMListenItem, MMListenCategoryItem, NSString;

@interface TingShareListenItem : WXPBGeneratedMessage <NSCopying, NSCoding>

@property (nonatomic) int type;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;

+ (id)xmlTagCustomFromXMLProcesslistForConfigTag:(id)a0;
+ (id)xmlTagCustomToXMLProcesslistForConfigTag:(id)a0;
+ (id)itemFromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (void)initialize;

- (void)setCategoryId:(id)a0;
- (id)categoryId;
- (void)setListenId:(id)a0;
- (id)listenId;
- (void)setCategoryItem:(id)a0;
- (id)categoryItem;
- (void)setListenItem:(id)a0;
- (id)listenItem;
- (void)setType:(int)a0;
- (int)type;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toXML:(id)a0;
- (id)toTingItem;
- (BOOL)hasSourceList;
- (id)finderSingerInfo;
- (BOOL)isFinderSinger;
- (id)finderSingerUsername;
- (id)finderSingerNickname;
- (id)displayTextForFinderSinger;

@end
