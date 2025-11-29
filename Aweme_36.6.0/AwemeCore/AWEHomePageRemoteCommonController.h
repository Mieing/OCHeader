@class AWEHomePageRemoteProxy, NSString, NSDictionary, AWEHomePageRemoteContext, UIView, AWEHomePageRemoteItemDataModel;
@protocol AWEHomePageRemoteViewProtocol;

@interface AWEHomePageRemoteCommonController : NSObject <AWEHomePageRemoteControllerProtocol>

@property (retain, nonatomic) AWEHomePageRemoteProxy *remoteProxy;
@property (retain, nonatomic) AWEHomePageRemoteContext *context;
@property (retain, nonatomic) AWEHomePageRemoteItemDataModel *dataModel;
@property (copy, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) UIView<AWEHomePageRemoteViewProtocol> *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (double)cellViewHeight;
- (id)atomicDataModel;
- (BOOL)canShowCellView;
- (BOOL)needLoadController;
- (id)oncreateView;
- (void)homePageRemoteThemeDidChange:(long long)a0;
- (void)setUpHomePageRemoteProxy:(id)a0;
- (void).cxx_destruct;

@end
