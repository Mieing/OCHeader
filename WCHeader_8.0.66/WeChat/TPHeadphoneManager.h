@protocol ITPHeadphoneManagerImpl;

@interface TPHeadphoneManager : NSObject

@property (retain, nonatomic) id<ITPHeadphoneManagerImpl> headphoneManagerImpl;

+ (id)sharedInstance;

- (id)init;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;

@end
