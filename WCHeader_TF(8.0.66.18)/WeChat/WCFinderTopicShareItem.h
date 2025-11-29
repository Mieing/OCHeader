@class NSString, WCFinderTopicShareTemplateItem, WCFinderFeedBindEventInfo, WCFinderTopicShareLocationItem;

@interface WCFinderTopicShareItem : NSObject <WCFinderShareItemProtocol>

@property (copy, nonatomic) NSString *topic;
@property (nonatomic) unsigned int topicType;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) WCFinderTopicShareLocationItem *location;
@property (copy, nonatomic) NSString *patMusicId;
@property (copy, nonatomic) NSString *fromFeedId;
@property (retain, nonatomic) WCFinderTopicShareTemplateItem *templateItem;
@property (nonatomic) unsigned long long musicType;
@property (nonatomic) unsigned long long topicCount;
@property (retain, nonatomic) WCFinderFeedBindEventInfo *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_topicType;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_patMusicId;
+ (void)PBArrayAdd_musicType;
+ (void)PBArrayAdd_topicCount;
+ (void)PBArrayAdd_event;
+ (void)PBArrayAdd_fromFeedId;
+ (void)PBArrayAdd_templateItem;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)chatDesc;
- (id)summayText:(id)a0 sender:(id)a1 isChatRoom:(BOOL)a2;
- (id)momentsSourceText;
- (id)momentsViewWithWCDataItem:(id)a0;
- (id)momentsDesc;
- (double)momentsHeightForMedia:(id)a0;
- (id)titleDisplayWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
