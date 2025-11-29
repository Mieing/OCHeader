@class NSString, FinderNewLifeDesc, FinderLocation, FinderNewLifeInfo;

@interface NewLifeShareExtInfo : NSObject <NSCoding, NSCopying, PBCoding>

@property (nonatomic) double createTime;
@property (retain, nonatomic) FinderNewLifeInfo *info;
@property (retain, nonatomic) FinderNewLifeDesc *desc;
@property (retain, nonatomic) FinderLocation *location;
@property (nonatomic) long long commentEggCount;
@property (nonatomic) long long activityType;
@property (nonatomic) long long isInnerQuickShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_info;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_commentEggCount;
+ (void)PBArrayAdd_activityType;
+ (void)PBArrayAdd_isInnerQuickShare;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
