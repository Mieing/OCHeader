@class NSLock, NSMutableArray;

@interface BDUGFlowAuthEntry : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSLock *lock;

+ (void)entryWithToken:(id)a0 bindEntity:(id)a1;
+ (void)leaveForToken:(id)a0;
+ (void)entryWithToken:(id)a0;
+ (BOOL)leaveTokenFromJSBWithCertID:(id)a0;
+ (id)latestToken;
+ (id)nextTokenFor:(id)a0;
+ (id)tokenCertAry;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
