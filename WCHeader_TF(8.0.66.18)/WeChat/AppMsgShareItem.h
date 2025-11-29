@class NSString, NSDate;

@interface AppMsgShareItem : NSObject <NSCopying, PBCoding>

@property (nonatomic) BOOL hasItemShowType;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) BOOL isNativePage;
@property (retain, nonatomic) NSDate *pubTime;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (copy, nonatomic) NSString *vid;
@property (nonatomic) unsigned int funcFlag;
@property (nonatomic) BOOL isPaySubscribe;
@property (nonatomic) BOOL showSourceInfo;
@property (copy, nonatomic) NSString *coverPicImageUrl;
@property (nonatomic) long long picCount;
@property (nonatomic) double coverPicWidth;
@property (nonatomic) double coverPicHeight;
@property (nonatomic) BOOL isFinderContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_hasItemShowType;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_isNativePage;
+ (void)PBArrayAdd_pubTime;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_vid;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_isPaySubscribe;
+ (void)PBArrayAdd_showSourceInfo;
+ (void)PBArrayAdd_coverPicImageUrl;
+ (void)PBArrayAdd_picCount;
+ (void)PBArrayAdd_coverPicWidth;
+ (void)PBArrayAdd_coverPicHeight;
+ (void)PBArrayAdd_isFinderContact;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
