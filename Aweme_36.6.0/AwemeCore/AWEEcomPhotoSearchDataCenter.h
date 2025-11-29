@class NSArray, NSMutableDictionary, AWEEcomPhotoSearchDataStore;

@interface AWEEcomPhotoSearchDataCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *mapping;
@property (copy, nonatomic) NSArray *sectionList;
@property (retain, nonatomic) AWEEcomPhotoSearchDataStore *currentDataStore;

- (id)identifierWithSection:(long long)a0;
- (id)dataStoreWithId:(id)a0;
- (id)searchChannelWithRawData:(id)a0;
- (BOOL)isFirstFloorWithChannel:(id)a0;
- (id)sectionParamsWithId:(id)a0;
- (id)dataStoreWithSection:(long long)a0;
- (BOOL)isFirstFloorWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)sectionWithIdentifier:(id)a0;

@end
