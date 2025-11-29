@class NSArray, NSMutableArray;

@interface IESECNetworkThreadPriorityManager : NSObject

@property (nonatomic) BOOL enableRaiseChromeIOThreadPriority;
@property (nonatomic) double raiseChromeIOThreadPriority;
@property (nonatomic) double resetChromeIOThreadPriority;
@property (copy, nonatomic) NSArray *raiseChromeIOThreadPriorityPaths;
@property (retain, nonatomic) NSMutableArray *hadRaisedChromeIOThreadPriorityPaths;

+ (id)shareInstance;

- (void)raiseChromeIOThreadPriorityIfNeeded:(id)a0;
- (void)resetChromeIOThreadPriorityIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
