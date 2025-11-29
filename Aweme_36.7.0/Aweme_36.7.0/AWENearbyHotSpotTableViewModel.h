@class NSString, AWEPOINearbyHotRankPOI, AWENearbyHotSpotFeedInitialContext;
@protocol AWENearbyHotSpotFeedDataControllerProtocol;

@interface AWENearbyHotSpotTableViewModel : NSObject

@property (retain, nonatomic) AWENearbyHotSpotFeedInitialContext *initialContext;
@property (retain, nonatomic) id<AWENearbyHotSpotFeedDataControllerProtocol> dataController;
@property (nonatomic) BOOL isHotRankVersionExpired;
@property (retain, nonatomic) NSString *hotRankVersionExpiredMessage;
@property (retain, nonatomic) AWEPOINearbyHotRankPOI *currentHotSpotModel;

+ (BOOL)hotSpotModel:(id)a0 isSameWith:(id)a1;

- (void)configWithParamDict:(id)a0;
- (BOOL)isSameHotSpotModel:(id)a0;
- (void)configWithJSBParamDict:(id)a0;
- (void).cxx_destruct;

@end
