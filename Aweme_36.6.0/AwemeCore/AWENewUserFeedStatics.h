@class NSArray;

@interface AWENewUserFeedStatics : NSObject

@property (retain, nonatomic) NSArray *cache;
@property (nonatomic) long long maxSize;

+ (id)sharedInstance;

- (id)generateNewUserFeedStatics;
- (void)addItem:(id)a0 channel:(id)a1 action:(unsigned long long)a2;
- (void)addItem:(id)a0 channel:(id)a1 action:(unsigned long long)a2 followUserId:(id)a3;
- (long long)integerFromChannelString:(id)a0;
- (void).cxx_destruct;

@end
