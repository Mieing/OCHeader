@class NSDictionary;
@protocol AWEModernFeedCellControllerProtocol, AWEGeneralDynamicCellControllerProtocol, AWESearchLynxContainerDataSourceProtocol;

@interface AWESearchLynxVideoFeedDetailContext : AWESearchVideoFeedDetailContext

@property (retain, nonatomic) id<AWESearchLynxContainerDataSourceProtocol> lynxContainer;
@property (retain, nonatomic) id<AWEModernFeedCellControllerProtocol, AWEGeneralDynamicCellControllerProtocol> generalLynxCellController;
@property (copy, nonatomic) NSDictionary *lynxParams;

- (void).cxx_destruct;

@end
