@class NSString, AWESearchAnchorInfoModel;

@interface AWESearchAnchorModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCheckedBrandWord;
@property (nonatomic) BOOL isBrandWord;
@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *wordID;
@property (copy, nonatomic) NSString *info;
@property (retain, nonatomic) AWESearchAnchorInfoModel *infoModel;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
