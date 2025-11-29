@class NSString, AWEClueStoreVideoModel, AWEClueStoreImageModel;

@interface AWEClueStoreMediaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long source;
@property (retain, nonatomic) AWEClueStoreImageModel *imageModel;
@property (retain, nonatomic) AWEClueStoreVideoModel *videoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
