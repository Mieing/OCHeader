@class UIImageView, RichTextView, NSString;
@protocol WCFinderNearbyLocationCellDelegate;

@interface WCFinderNearbyLocationCollectionViewCell : UICollectionViewCell <ILinkEventExt>

@property (retain, nonatomic) UIImageView *locationImageView;
@property (retain, nonatomic) RichTextView *hintTextView;
@property (weak, nonatomic) id<WCFinderNearbyLocationCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
