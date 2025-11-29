@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface POIFlutterDataReport : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)setIsExpandedIsExpanded:(BOOL)a0 completion:(id /* block */)a1;
- (void)onScreenAppearWithCompletion:(id /* block */)a0;
- (void)onScreenDisappearWithCompletion:(id /* block */)a0;
- (void)setFeedLoadingTimeTimeInMs:(long long)a0 completion:(id /* block */)a1;
- (void)reportPOIDetailPageCustomEventEventId:(id)a0 eventParamJsonString:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
