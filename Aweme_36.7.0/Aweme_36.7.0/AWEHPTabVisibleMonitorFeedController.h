@class NSString, AWEAwemeModel;

@interface AWEHPTabVisibleMonitorFeedController : AWEBaseController <AWEFeedControllerProtocol>

@property (nonatomic) BOOL isAppear;
@property (weak, nonatomic) AWEAwemeModel *curAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
