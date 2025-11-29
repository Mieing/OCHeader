@class NSString, NSArray, NSDictionary;
@protocol LSListVMDelegate;

@interface LSListVM : NSObject <LSListCellVMDelegate, LSListVMProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<LSListVMDelegate> delegate;
@property (nonatomic) long long lifeCycle;
@property (nonatomic) long long pageState;
@property (nonatomic) long long naviBarState;
@property (nonatomic) long long refreshHeaderState;
@property (nonatomic) long long refreshFooterState;
@property (copy, nonatomic) NSArray *cellVMs;
@property (copy, nonatomic) NSDictionary *trackData;

- (void)handleListFetch;
- (Class)listFactory;
- (void)cellVM:(id)a0 action:(id)a1;
- (void)cellVMHeightDidChanged:(id)a0 needShowFull:(BOOL)a1;
- (void)handleListLifeCycleChanged:(long long)a0;
- (void)handleListLoadMore;
- (void)cellVMWillDisplay:(id)a0;
- (void)handleCellVM:(id)a0 action:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
