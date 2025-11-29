@class NSString, AWEURLModel;

@interface AWELVideoEntranceInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long jumpType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)anchorTypeStringForMetric;
- (void).cxx_destruct;

@end
