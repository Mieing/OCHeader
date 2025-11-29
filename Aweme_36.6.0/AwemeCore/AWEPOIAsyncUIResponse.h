@class AWEPOIUgcBottomBarModel;

@interface AWEPOIAsyncUIResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEPOIUgcBottomBarModel *ugcBottomBar;
@property (readonly, nonatomic) BOOL hasValidUGCBottomBar;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
