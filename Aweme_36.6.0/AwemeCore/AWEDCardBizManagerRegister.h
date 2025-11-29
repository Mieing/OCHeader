@class NSMutableArray;

@interface AWEDCardBizManagerRegister : NSObject

@property (retain, nonatomic) NSMutableArray *bizManagersArray;

+ (id)sharedInstance;

- (void)registerBizManager:(id)a0;
- (void).cxx_destruct;

@end
