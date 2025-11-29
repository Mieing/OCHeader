@class NSString, AWENearbyPageContext;

@interface AWENearbyGrouponFeedBasePlugin : NSObject <AWENearbyGrouponPageScrollProtocol>

@property (weak, nonatomic) AWENearbyPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end
