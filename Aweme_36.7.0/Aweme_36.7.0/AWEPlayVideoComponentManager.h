@class NSArray;
@protocol AWEPlayVideoComponentContainerProtocol;

@interface AWEPlayVideoComponentManager : NSObject

@property (weak, nonatomic) id<AWEPlayVideoComponentContainerProtocol> playerViewController;
@property (copy, nonatomic) NSArray *components;

- (BOOL)shouldPreventPlay;
- (id)coverImageViewContentMode;
- (id)videoPlayerScaleMode;
- (id)componentClassArray;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlayerViewController:(id)a0;
- (void)setupComponents;

@end
