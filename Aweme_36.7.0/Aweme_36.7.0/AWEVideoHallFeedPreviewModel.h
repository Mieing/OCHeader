@class NSString, AWETheaterSectionItemHighlightInfo, AWEAwemeModel, NSDictionary;

@interface AWEVideoHallFeedPreviewModel : MTLModel <AWEListDiffable, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWETheaterSectionItemHighlightInfo *highlightModel;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highlightModelJSONTransformer;
+ (id)modelModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifierKey;
- (void).cxx_destruct;

@end
