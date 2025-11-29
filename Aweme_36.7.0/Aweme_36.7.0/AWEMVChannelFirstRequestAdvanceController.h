@class NSDate, AWEMVChannelPageContext;

@interface AWEMVChannelFirstRequestAdvanceController : AWEDCFeedBaseController

@property (readonly, nonatomic) AWEMVChannelPageContext *mvContext;
@property (retain, nonatomic) NSDate *lastStoreDate;

- (void)p_storeFirstRequest;
- (void).cxx_destruct;
- (void)applicationWillResignActive;

@end
