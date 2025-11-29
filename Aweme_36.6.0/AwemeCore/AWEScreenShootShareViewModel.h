@class NSArray, NSMutableArray, NSDictionary;

@interface AWEScreenShootShareViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *panelDataArr;
@property (nonatomic) BOOL canShareOutside;
@property (nonatomic) BOOL noQRCodeAndNoAwemeModelCheck;
@property (copy, nonatomic) NSArray *shareOutsideChannelArray;
@property (copy, nonatomic) NSDictionary *trackParams;

- (id)filterTranspondIMShareModelListIfNeeded:(id)a0;
- (void)loadPanelDataWithAweme:(id)a0 completion:(id /* block */)a1;
- (void)_loadPanelDataFriendsArr:(id)a0 hasMore:(BOOL)a1 completion:(id /* block */)a2;
- (void)getViewModelActiveState:(id)a0;
- (void)p_acquireUserActive:(id)a0 withArray:(id)a1 hasMore:(BOOL)a2 withCompletion:(id /* block */)a3;
- (id)panelListArray;
- (id)setUpScreenShootPanelDataArray;
- (void)getInteractiveFriendsWithAweme:(id)a0 DataCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
