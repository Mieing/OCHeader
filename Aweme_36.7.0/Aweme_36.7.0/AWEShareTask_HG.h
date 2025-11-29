@class NSString, BDPUniqueID, BDPShareResultModel;

@interface AWEShareTask_HG : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) BDPShareResultModel *model;

- (id)initWithUniqueID:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
- (void)finishWith:(long long)a0 error:(id)a1 info:(id)a2;
- (id)initWithUniqueID:(id)a0 channel:(id)a1 shareResultModel:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)finished;

@end
