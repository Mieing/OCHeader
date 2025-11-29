@interface AWETabListContainerObserveInfo : NSObject

@property (copy, nonatomic) id /* block */ panStateChangeBlock;
@property (copy, nonatomic) id /* block */ contentOffsetChangeBlock;

+ (id)info;

- (void).cxx_destruct;

@end
