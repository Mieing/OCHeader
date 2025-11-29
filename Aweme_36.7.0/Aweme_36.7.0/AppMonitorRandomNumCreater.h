@class NSLock;

@interface AppMonitorRandomNumCreater : NSObject {
    int iRandomNum;
}

@property (retain, nonatomic) NSLock *lock;

+ (id)sharedInstance;

- (int)getRandomNum;
- (BOOL)initRandomNum;
- (void).cxx_destruct;
- (id)init;

@end
