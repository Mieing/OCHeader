@class NSString, NSArray;

@interface AWEIMXBridgeImFetchDeletedChatsMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *nextCursor;
@property (retain, nonatomic) NSArray *items;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
