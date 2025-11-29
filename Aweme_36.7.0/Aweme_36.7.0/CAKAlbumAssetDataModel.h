@class NSString, CAKAlbumAssetModelManager;

@interface CAKAlbumAssetDataModel : NSObject <CAKCategoryContainerProtocol>

@property (nonatomic) unsigned long long resourceType;
@property (retain, nonatomic) CAKAlbumAssetModelManager *assetModelManager;
@property (nonatomic) BOOL shouldReverse;
@property (nonatomic) double fetchMediaDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfObject;
- (id)objectIndex:(long long)a0;
- (void)subscribeDataUpdateNotification:(id /* block */)a0;
- (void).cxx_destruct;
- (id)fetchResult;
- (void)reverse;
- (BOOL)containsObject:(id)a0;
- (long long)indexOfObject:(id)a0;

@end
