@class NSArray, AWEFeedPlayableMaskColorInfoModel, NSString;

@interface AWEFeedPlayableMaskBgInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *sectionInfo;
@property (retain, nonatomic) AWEFeedPlayableMaskColorInfoModel *successEndInfo;
@property (retain, nonatomic) AWEFeedPlayableMaskColorInfoModel *abnormalEndInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
