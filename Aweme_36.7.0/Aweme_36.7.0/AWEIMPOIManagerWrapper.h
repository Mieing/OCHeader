@class NSError, FBKVOController;
@protocol AWEIMPoiManagerWrapperDelegate, AWEPOISearchLocationDataManagerProtocol;

@interface AWEIMPOIManagerWrapper : NSObject

@property (retain, nonatomic) FBKVOController *searchKVO;
@property (retain, nonatomic) NSError *searchError;
@property (retain, nonatomic) id<AWEPOISearchLocationDataManagerProtocol> searchPOIDataManger;
@property (weak, nonatomic) id<AWEIMPoiManagerWrapperDelegate> delegate;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } currentCoordinate;
@property (nonatomic) BOOL isSearching;

- (void)cancelAllSearchRequests;
- (void)updateUserCityCode:(id)a0 city:(id)a1;
- (void)searchMore;
- (id)locationStringWithcoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
