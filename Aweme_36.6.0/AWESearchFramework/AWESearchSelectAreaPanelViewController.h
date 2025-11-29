@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, AWESearchFilterMultipleColView, NSDictionary, AWESearchFilterBaseManager, NSString, AWEDoubleColumnSearchMerchandiseQueryModel;

@interface AWESearchSelectAreaPanelViewController : UIViewController <AWESearchFilterMultipleColViewDelegate, AWESearchSelectAreaPanelViewControllerProtocol>

@property (retain, nonatomic) AWESearchFilterBaseManager *filterBaseManager;
@property (retain, nonatomic) AWESearchFilterMultipleColView *filterColView;
@property (retain, nonatomic) NSDictionary *filterData;
@property (readonly, copy, nonatomic) id /* block */ bridgeCallback;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseQueryModel *queryModel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *addressModel;
@property (copy, nonatomic) id /* block */ selectionDidEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (id)dux_titleForColoseButton;
- (void)filterViewFinishFilteringWithModel:(id)a0 tempManager:(id)a1;
- (id)initWithFilterData:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
