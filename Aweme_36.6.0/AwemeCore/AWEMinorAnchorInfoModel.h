@class NSString, AWEURLModel;

@interface AWEMinorAnchorInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *anchorID;
@property (nonatomic) unsigned long long anchorType;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleTag;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *mpURL;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *searchExtra;
@property (copy, nonatomic) NSString *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
