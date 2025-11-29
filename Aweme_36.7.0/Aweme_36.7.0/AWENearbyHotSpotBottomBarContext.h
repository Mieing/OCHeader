@class NSString;
@protocol AWENearbyHotSpotBottomViewDelegate;

@interface AWENearbyHotSpotBottomBarContext : NSObject <AWENearbyHotSpotBottomBarContextProtocol>

@property (weak, nonatomic) id<AWENearbyHotSpotBottomViewDelegate> viewController;
@property (nonatomic) unsigned long long bizType;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
