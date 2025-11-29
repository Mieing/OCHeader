@class NSString, IESECWinDataController, UIImageView, IESECWinContainerErrorView, FBKVOController, IESECServiceProxy, IESECWinContext;
@protocol IESECWinSplitService, IESECWinDataStatusService;

@interface IESECWinContainerStatusVC : UIViewController <IESECWinContextProtocol>

@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) IESECWinContainerErrorView *errorView;
@property (weak, nonatomic) IESECWinDataController *dataController;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *dataStatusService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
