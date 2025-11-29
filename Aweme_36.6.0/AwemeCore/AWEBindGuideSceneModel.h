@class NSString, AWEBindGuideLinkModel;

@interface AWEBindGuideSceneModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pageScene;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *mainText;
@property (nonatomic) BOOL showRedPoint;
@property (retain, nonatomic) AWEBindGuideLinkModel *leftLinkModel;
@property (retain, nonatomic) AWEBindGuideLinkModel *rightLinkModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftLinkModelJSONTransformer;
+ (id)rightLinkModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
