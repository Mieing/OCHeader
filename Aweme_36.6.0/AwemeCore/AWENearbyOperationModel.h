@class NSString, AWEURLModel;

@interface AWENearbyOperationModel : MTLModel <MTLJSONSerializing, AWENearbyInsertCardProtocol>

@property (copy, nonatomic) NSString *operationDescription;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long indexToInsert;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (copy, nonatomic) NSString *boostTaskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
