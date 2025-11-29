@interface BDPReddotManager : NSObject

@property (nonatomic) BOOL isReddotExist;

+ (id)sharedInstance;

- (id)createDotView;
- (id)p_getUserId;
- (void)p_setReddotInfosWithWriteType:(unsigned long long)a0 isExist:(BOOL)a1 lastExistTime:(id)a2 lastRequestTime:(id)a3;
- (void)requestNewestReplyIfNeedWithCompletion:(id /* block */)a0;

@end
