@protocol AWEHttpTask;

@interface AWESearchMediumCollectManager : NSObject

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) id<AWEHttpTask> currentTask;

- (void)refreshMediumCollectWithID:(id)a0 withStatus:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
