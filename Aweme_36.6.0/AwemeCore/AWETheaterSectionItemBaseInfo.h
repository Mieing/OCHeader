@class NSString, AWEURLModel;

@interface AWETheaterSectionItemBaseInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *itemSubtitle;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) NSString *videoPlayAddr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
