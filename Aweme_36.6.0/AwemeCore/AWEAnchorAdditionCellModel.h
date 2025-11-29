@class NSDictionary, NSString, AWEURLModel;

@interface AWEAnchorAdditionCellModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *cachedExtraDic;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long sectionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraDic;
- (id)recommendReason;
- (void).cxx_destruct;

@end
