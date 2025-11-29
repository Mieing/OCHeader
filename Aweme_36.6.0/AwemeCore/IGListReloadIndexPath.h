@class NSIndexPath;

@interface IGListReloadIndexPath : NSObject

@property (readonly, nonatomic) NSIndexPath *fromIndexPath;
@property (readonly, nonatomic) NSIndexPath *toIndexPath;

- (id)initWithFromIndexPath:(id)a0 toIndexPath:(id)a1;
- (void).cxx_destruct;

@end
