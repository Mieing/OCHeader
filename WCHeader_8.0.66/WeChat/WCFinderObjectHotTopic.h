@class NSString, NSData;

@interface WCFinderObjectHotTopic : NSObject <WCTTableCoding, PBCoding>

@property (nonatomic) unsigned long long topicId;
@property (copy, nonatomic) NSString *topicName;
@property (nonatomic) unsigned int topicType;
@property (nonatomic) BOOL jumpFlag;
@property (copy, nonatomic) NSData *topicBuffer;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_topicName;
+ (void)PBArrayAdd_topicType;
+ (void)PBArrayAdd_jumpFlag;
+ (void)PBArrayAdd_topicBuffer;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)topicId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_topicId;
+ (const void *)topicName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_topicName;
+ (const void *)topicType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_topicType;
+ (const void *)jumpFlag;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_jumpFlag;
+ (const void *)topicBuffer;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_topicBuffer;
+ (id)newWithPBTopic:(id)a0;

- (id)getPBPropertyTable;
- (id)convertToPBTopic;
- (void).cxx_destruct;

@end
