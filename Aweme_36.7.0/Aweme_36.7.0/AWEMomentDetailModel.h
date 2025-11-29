@class NSString, AWEURLModel;

@interface AWEMomentDetailModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *coverURL;
@property (nonatomic) unsigned long long userCount;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
