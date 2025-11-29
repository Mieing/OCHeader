@class NSString, AWETeenExternalAlbumBottomBarView;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWETeenExternalAlbumBottomBarController : NSObject <AWETeenExternalAlbumBottomBarViewDelegate, AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) AWETeenExternalAlbumBottomBarView *pBottomBarView;
@property (retain, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarDidClick:(id)a0;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
