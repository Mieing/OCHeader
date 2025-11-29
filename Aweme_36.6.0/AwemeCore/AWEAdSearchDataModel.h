@class NSString, AWEOriginalAdModel;

@interface AWEAdSearchDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEOriginalAdModel *searchDownloadModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchDownloadModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
