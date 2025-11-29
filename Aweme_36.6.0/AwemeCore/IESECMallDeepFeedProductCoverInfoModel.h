@class NSArray, IESECURLModel, NSString;

@interface IESECMallDeepFeedProductCoverInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *cover;
@property (retain, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *coverVideo;
@property (copy, nonatomic) id /* block */ imageLoadingCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverVideoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
