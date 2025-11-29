@class NSString;
@protocol AWEPlayVideoComponentContainerProtocol;

@interface AWEPlayVideoBaseComponent : NSObject <AWEPlayVideoComponentProtocol>

@property (weak, nonatomic) id<AWEPlayVideoComponentContainerProtocol> playerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shouldPreventPlay;
- (id)coverImageViewContentMode;
- (id)videoPlayerScaleMode;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlayerViewController:(id)a0;

@end
