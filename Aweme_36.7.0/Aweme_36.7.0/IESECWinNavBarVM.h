@class IESECWinContext, UIViewController, NSString;

@interface IESECWinNavBarVM : NSObject <IESECWinContextProtocol>

@property (retain, nonatomic) IESECWinContext *context;
@property (weak, nonatomic) UIViewController *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackSearchBarShow;
- (void)trackCartClick;
- (void)trackShareClick;
- (void)trackImEntryShow;
- (id)searchBTMID;
- (void)trackImEntryClick;
- (void)trackMoreClick;
- (void)trackMyOrderClick;
- (void)trackMyWindowClick;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
