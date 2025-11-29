@class NSString, AWEOriginalAdModel, AWEURLModel;

@interface AWEStarLinkModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *iconURLModel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *webURL;
@property (retain, nonatomic) NSString *openURL;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEOriginalAdModel *originAdInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLModelJSONTransformer;
+ (id)originAdInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
