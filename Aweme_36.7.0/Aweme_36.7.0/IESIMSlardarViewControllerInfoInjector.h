@class NSString, IESIMSlardarInjectedInfoTracker;

@interface IESIMSlardarViewControllerInfoInjector : NSObject

@property (nonatomic) BOOL didInjectInfo;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) NSString *viewControllerKey;
@property (weak, nonatomic) IESIMSlardarInjectedInfoTracker *slardarTracker;

- (id)initWithPageType:(long long)a0;
- (void)addInjectInfoIfNeeded;
- (void)removeInjectedInfoIfNeeded;
- (void).cxx_destruct;

@end
