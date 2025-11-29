@class NSString;

@interface IESIMGroupParticipantTagDBModel : NSObject <WCTTableCoding, IESIMGroupTagDBProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *tagKey;
@property (copy, nonatomic) NSString *tagLevelRawDataInJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)secUid;
+ (const void *)tagKey;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)tagLevelRawDataInJson;
+ (const void *)conversationID;
+ (id)tableName;

- (id)transferToTagLevelModel;
- (id)initWithConversationID:(id)a0 secUid:(id)a1 tagKey:(id)a2 tagLevel:(id)a3;
- (void).cxx_destruct;

@end
