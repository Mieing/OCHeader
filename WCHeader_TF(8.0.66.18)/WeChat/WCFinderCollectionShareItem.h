@class NSString, WCFinderContact;

@interface WCFinderCollectionShareItem : NSObject <WCFinderShareItemProtocol>

@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) int collectionTopicType;
@property (nonatomic) int paidCollectionType;
@property (nonatomic) unsigned long long collectionId;
@property (copy, nonatomic) NSString *authorUsername;
@property (nonatomic) unsigned int feedCount;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *collectionDesc;
@property (nonatomic) unsigned int price;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *authIconURL;
@property (nonatomic) unsigned long long authIconType;
@property (nonatomic) int sourceCommentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithCollectionInfo:(id)a0 authorUsername:(id)a1 sourceCommentScene:(int)a2;
+ (id)itemWithPaidCollectionInfo:(id)a0 authorUsername:(id)a1 sourceCommentScene:(int)a2;
+ (void)PBArrayAdd_collectionTopicType;
+ (void)PBArrayAdd_paidCollectionType;
+ (void)PBArrayAdd_collectionId;
+ (void)PBArrayAdd_authorUsername;
+ (void)PBArrayAdd_feedCount;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_collectionDesc;
+ (void)PBArrayAdd_price;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_avatarURL;
+ (void)PBArrayAdd_authIconURL;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_sourceCommentScene;
+ (void)initialize;

- (void)_fillContactInfo;
- (id)descString;
- (BOOL)isPaidCollection;
- (id)resolveNickname;
- (id)resolveAvatarURL;
- (id)resolveAuthIconURL;
- (unsigned long long)resolveAuthIconType;
- (id)toXML;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)chatDesc;
- (id)momentsDesc;
- (double)momentsHeightForMedia:(id)a0;
- (id)momentsSourceText;
- (id)momentsViewWithWCDataItem:(id)a0;
- (id)summayText:(id)a0 sender:(id)a1 isChatRoom:(BOOL)a2;
- (id)titleContainChanel:(BOOL)a0;
- (id)exposeReportMode;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
