@class AWENearbyCardFeedViewController, NSString, AWENearbyPageContext;

@interface AWENearbyCardFeedBasePlugin : NSObject <AWENearbyCardFeedPageProtocol>

@property (weak, nonatomic) AWENearbyCardFeedViewController *containerVC;
@property (weak, nonatomic) AWENearbyPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
