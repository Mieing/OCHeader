@class NSData, NSString;
@protocol WCFinderShareItemProtocol;

@interface WCFinderShareItemContainer : NSObject <WCFinderShareItemProtocol>

@property (retain, nonatomic) NSData *detailItemData;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<WCFinderShareItemProtocol> detailItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_detailItemData;
+ (void)initialize;
+ (id)shareItemMap;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)chatDesc;
- (id)momentsDesc;
- (double)momentsHeightForMedia:(id)a0;
- (id)momentsSourceText;
- (id)momentsViewWithWCDataItem:(id)a0;
- (id)summayText:(id)a0 sender:(id)a1 isChatRoom:(BOOL)a2;
- (id)valueForKey:(id)a0;
- (BOOL)canWarpMessage;
- (BOOL)isFinderTopicLikeShareType;
- (BOOL)isFinderPOIRelatedType;
- (void)exposeReport:(id)a0 params:(id)a1;
- (unsigned long long)getCardType;
- (id)getFeedId;
- (id)getEventId;
- (void).cxx_destruct;

@end
