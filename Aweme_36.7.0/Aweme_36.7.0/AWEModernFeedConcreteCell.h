@class AWESearchAutoPlayHandler, NSString, AWEModernFeedSectionMeta, AWEModernFeedCellBackgroundModel, AWEModernFeedCellSeparatorModel, UIViewController;
@protocol AWEModernFeedCellControllerProtocol;

@interface AWEModernFeedConcreteCell : UITableViewCell <AWESearchAutoPlayCardProtocol>

@property (weak, nonatomic) UIViewController<AWEModernFeedCellControllerProtocol> *cellController;
@property (retain, nonatomic) AWEModernFeedCellSeparatorModel *bottomSeparator;
@property (retain, nonatomic) AWEModernFeedCellBackgroundModel *cellBackgroundModel;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) UIViewController<AWEModernFeedCellControllerProtocol> *attachmentCellController;
@property (retain, nonatomic) AWEModernFeedSectionMeta *meta;
@property (nonatomic) unsigned long long qualityStyleCornerType;
@property (nonatomic) BOOL isQualityCardStyle;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldNotActive;
- (void)qualityStyleBackground;
- (void)rectangleBackground;
- (void)cornerRadiusWithMaskPath:(id)a0;
- (BOOL)p_cellControllerCanCallSetAutoPlayHandler;
- (BOOL)p_cellControllerCanCallDidBecomeActive;
- (BOOL)p_cellControllerCanCallDidResignActive;
- (BOOL)p_cellControllerCanCallActiveView;
- (BOOL)p_cellControllerCanCallShouldNotActive;
- (BOOL)p_cellControllerCanCallHasVideo;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasVideo;
- (void)didResignActive;
- (void)layoutSubviews;
- (id)activeView;

@end
