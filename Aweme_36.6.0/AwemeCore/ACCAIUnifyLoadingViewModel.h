@class NSString;
@protocol ACCAIUnifyLoadingViewOperateProtocol;

@interface ACCAIUnifyLoadingViewModel : ACCEditViewModel <ACCAIUnifyLoadingServiceProtocol>

@property (retain, nonatomic) id<ACCAIUnifyLoadingViewOperateProtocol> loadingOperate;
@property (nonatomic) unsigned long long closeEditPageSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
