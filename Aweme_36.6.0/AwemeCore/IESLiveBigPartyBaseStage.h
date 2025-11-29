@class IESLiveBigPartyAnchorEmojiContainerView, IESLiveBigPartyAnchorInteractiveEmoji1V6ContainerView;
@protocol IESLiveBigPartyStageDataSource, IESLiveBigPartyStageDelegate;

@interface IESLiveBigPartyBaseStage : NSObject

@property (nonatomic) BOOL didLoad;
@property (weak, nonatomic) id<IESLiveBigPartyStageDelegate> delegate;
@property (weak, nonatomic) id<IESLiveBigPartyStageDataSource> dataSource;
@property (readonly, nonatomic) IESLiveBigPartyAnchorEmojiContainerView *anchorOwnEmojiContainer;
@property (readonly, nonatomic) IESLiveBigPartyAnchorInteractiveEmoji1V6ContainerView *anchorInteractiveEmojiContainer;

- (void)didSetAttachingDIContext;
- (BOOL)canPerformWillLoad;
- (void)addAnchorEmojiContainer;
- (BOOL)canPerformWillUnLoad;
- (void)removeAnchorEmojiContainer;
- (void).cxx_destruct;

@end
