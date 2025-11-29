@class AWEIMCellPresenterBase, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMCellComponentBase : AWEIMComponentBase <AWEIMChatCellComponentEvent>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) AWEIMCellPresenterBase *presenter;
@property (retain, nonatomic) AWEIMCellPresenterBase *renderPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCellPrepareReuseForCurrentViewModel;
- (void).cxx_destruct;
- (id)init;

@end
