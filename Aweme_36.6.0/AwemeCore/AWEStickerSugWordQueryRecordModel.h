@class NSString;

@interface AWEStickerSugWordQueryRecordModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSString *wordsSource;
@property (copy, nonatomic) NSString *queryID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
