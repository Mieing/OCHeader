@class NSArray, AWEAdFeedPreloadDataModel, NSString, AWEOriginalAdLynxPreloadResource;

@interface AWEAdItemLokiLikeEggModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *lokiComponents;
@property (retain, nonatomic) AWEAdFeedPreloadDataModel *feedAdPreloadData;
@property (retain, nonatomic) AWEOriginalAdLynxPreloadResource *lynxResourcePreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
