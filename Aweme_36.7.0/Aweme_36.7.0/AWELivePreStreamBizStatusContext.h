@protocol AWELivePreStreamBizStatusContextDelegate;

@interface AWELivePreStreamBizStatusContext : NSObject

@property (nonatomic) unsigned long long statusOptions;
@property (nonatomic) unsigned long long oldStatusOptions;
@property (weak, nonatomic) id<AWELivePreStreamBizStatusContextDelegate> delegate;

- (void)updateBizStatus:(unsigned long long)a0 open:(BOOL)a1;
- (void).cxx_destruct;

@end
