@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface POIFlutterAPI : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)updateFavoriteStateSelected:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateScrollStateProgress:(double)a0 completion:(id /* block */)a1;
- (void)scrollToTopWithCompletion:(id /* block */)a0;
- (void)updateSubAddressSubAddress:(id)a0 completion:(id /* block */)a1;
- (void)reloadHeadWithInfoPoiBasicInfoPBData:(id)a0 completion:(id /* block */)a1;
- (void)reloadHeadWithServiceInfoPoiServiceInfoPBData:(id)a0 completion:(id /* block */)a1;
- (void)updateInitPageTabListData:(id)a0 defaultTabIndex:(long long)a1 defaultFilterIndex:(long long)a2 streamUpdateData:(id)a3 completion:(id /* block */)a4;
- (void)appendPoiStreamTabIndex:(long long)a0 filterIndex:(long long)a1 streamUpdateData:(id)a2 completion:(id /* block */)a3;
- (void)noMorePoiStreamTabIndex:(long long)a0 filterIndex:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
