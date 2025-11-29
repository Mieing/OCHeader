@class NSString;

@interface MMFinderLiveBottomTextButton : WCLiveBottomTextButton

@property (nonatomic) BOOL hideServerRedDot;
@property (copy, nonatomic) id /* block */ redDotQueryBlock;
@property (copy, nonatomic) id /* block */ exposeBlock;
@property (copy, nonatomic) NSString *redDotPath;
@property (nonatomic) BOOL exposed;
@property (copy, nonatomic) id /* block */ shouldShouldRedDotPredicate;

- (void)reloadRedDot;
- (void)markExposed;
- (void)toggleServerRedDotHidden:(BOOL)a0;
- (void)updateBadgeNum:(unsigned long long)a0;
- (void)updateBadgeValue:(id)a0;
- (void)updateRedDotAppearance:(BOOL)a0;
- (void).cxx_destruct;

@end
