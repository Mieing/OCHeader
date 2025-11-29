@class UIImageView, AWECommonFeedSectionContext, NSString;
@protocol AWECommonFeedCellModelProtocol;

@interface AWENewsAISmartPlaceHolderCell : UICollectionViewCell <AWECommonFeedCellProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (void)p_configUI;
- (void)startOpacityLoopAnimation;
- (void).cxx_destruct;
- (BOOL)hasVideo;

@end
