@class WCFinderCollectionInfoView, NSString;
@protocol WCFinderContinueCollectionPagerCellDelegate;

@interface WCFinderContinueCollectionPagerCell : UICollectionViewCell <WCFinderCollectionInfoViewDelegate>

@property (weak, nonatomic) id<WCFinderContinueCollectionPagerCellDelegate> delegate;
@property (retain, nonatomic) WCFinderCollectionInfoView *infoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
