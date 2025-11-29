@class NSNumber, NSString, NSArray;

@interface ACCQuickFlashFavoriteListModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSArray *collectedModels;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectedModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
