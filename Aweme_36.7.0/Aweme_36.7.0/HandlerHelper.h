@class NSMutableArray;

@interface HandlerHelper : NSObject

@property (retain, nonatomic) NSMutableArray *mOnlineHandlerArray;
@property (retain, nonatomic) NSMutableArray *mPreHandlerArray;
@property (retain, nonatomic) NSMutableArray *mDailyHandlerArray;

+ (id)getAndResetHandlerArray:(int)a0;
+ (void)setHandler:(int)a0 resultHandler:(id /* block */)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
