@class NSString, AWEURLModel;

@interface AWEAdFeedAlphaVideoResourcesModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *videoUrl;
@property (copy, nonatomic) NSString *videoName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
