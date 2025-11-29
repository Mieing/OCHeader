@class NSIndexPath;

@interface AWEIMMoveRowAction : AWEIMTableViewAction

@property (retain, nonatomic) NSIndexPath *fromIndexPath;
@property (retain, nonatomic) NSIndexPath *toIndexPath;

- (void)actionInvoke;
- (void).cxx_destruct;
- (long long)coefficient;

@end
