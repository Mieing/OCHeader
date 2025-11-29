@class NSString, NSDate;

@interface IESIMGroupTagInfoDBModel : NSObject <WCTTableCoding, IESIMGroupTagDBProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (copy, nonatomic) NSString *lastConversationOwnerID;
@property (copy, nonatomic) NSString *lastChooseTagKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)lastChooseTagKey;
+ (const void *)lastConversationOwnerID;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)lastUpdateDate;
+ (const void *)conversationID;
+ (id)tableName;

- (void).cxx_destruct;

@end
