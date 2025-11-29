@class NSString;

@interface IESIMGroupTagConfigDBModel : NSObject <WCTTableCoding, IESIMGroupTagDBProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *tagKey;
@property (copy, nonatomic) NSString *tagItemModelRawDataInJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)tagKey;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)tagItemModelRawDataInJson;
+ (const void *)conversationID;
+ (id)tableName;

- (id)initWithModel:(id)a0 cid:(id)a1;
- (id)transferToItemModel;
- (void).cxx_destruct;

@end
