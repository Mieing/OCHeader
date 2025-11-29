@class NSString, NSNumber, AWEURLModel;

@interface AWETeenEncyKnowledgeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *pointID;
@property (retain, nonatomic) NSNumber *wikiID;
@property (copy, nonatomic) NSString *abstract;
@property (copy, nonatomic) NSString *openURL;
@property (retain, nonatomic) AWEURLModel *cover;
@property (nonatomic) BOOL isNewWiki;
@property (retain, nonatomic) NSNumber *wikiNewID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
