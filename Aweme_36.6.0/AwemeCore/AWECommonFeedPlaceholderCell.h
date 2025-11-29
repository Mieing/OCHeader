@class NSString, AWECommonFeedSectionContext;
@protocol AWECommonFeedCellModelProtocol;

@interface AWECommonFeedPlaceholderCell : UICollectionViewCell <AWECommonFeedCellProtocol>

@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasVideo;

@end
