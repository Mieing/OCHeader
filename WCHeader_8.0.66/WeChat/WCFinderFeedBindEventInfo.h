@class NSString, FinderEventWordingInfo;

@interface WCFinderFeedBindEventInfo : NSObject <YYModel, NSCoding, NSCopying, PBCoding, WCTTableCoding>

@property (nonatomic) unsigned long long eventTopicId;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventCreatorNickName;
@property (nonatomic) unsigned long long cacheTime;
@property (nonatomic) unsigned long long eventAttendCount;
@property (nonatomic) unsigned long long hiddenMark;
@property (retain, nonatomic) FinderEventWordingInfo *wordingInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)eventID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_eventID;
+ (const void *)eventName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_eventName;
+ (const void *)eventCreatorNickName;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_eventCreatorNickName;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)eventAttendCount;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_eventAttendCount;
+ (const void *)wordingInfo;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_wordingInfo;
+ (const void *)hiddenMark;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_hiddenMark;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;
+ (void)PBArrayAdd_eventID;
+ (void)PBArrayAdd_eventName;
+ (void)PBArrayAdd_eventCreatorNickName;
+ (void)PBArrayAdd_eventAttendCount;
+ (void)PBArrayAdd_wordingInfo;
+ (void)PBArrayAdd_hiddenMark;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)getPBPropertyTable;
- (id)initWithFinderEventInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)genEventDescObject;
- (id)shownEventName;
- (id)shortShownEventName;
- (id)shownEventCount;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
