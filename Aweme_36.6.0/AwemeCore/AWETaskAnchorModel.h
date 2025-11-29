@class NSString, AWEURLModel;

@interface AWETaskAnchorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *anchorContent;
@property (nonatomic) long long anchorType;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL canModifyAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
