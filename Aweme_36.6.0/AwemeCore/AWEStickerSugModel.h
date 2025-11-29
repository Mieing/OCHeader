@class NSString, NSArray, AWEStickerSugRecordModel;

@interface AWEStickerSugModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *highlightPositions;
@property (retain, nonatomic) AWEStickerSugRecordModel *wordRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highlightPositionsJSONTransformer;
+ (id)wordRecordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
