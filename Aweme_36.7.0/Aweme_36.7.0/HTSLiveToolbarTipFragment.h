@class HTSLiveToolbarTipStore, NSMutableArray, NSString;
@protocol HTSLiveToolbarTip;

@interface HTSLiveToolbarTipFragment : IESLiveRoomComponent <HTSLiveToolbarTipProvider>

@property (retain, nonatomic) HTSLiveToolbarTipStore *toolbarTipStore;
@property (retain, nonatomic) NSMutableArray *giftsTipHistory;
@property (weak, nonatomic) id<HTSLiveToolbarTip> tip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)showToolBarTipIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
