@class NSString, AWEAwemeModel;

@interface AWEProfileBrandVideoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *pullText;
@property (nonatomic) double vodeoStartTime;
@property (nonatomic) double vodeoEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enableBrandTopVideo;
- (void).cxx_destruct;

@end
