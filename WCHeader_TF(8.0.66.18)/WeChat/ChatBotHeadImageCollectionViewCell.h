@class NSString, MMWebImageView;

@interface ChatBotHeadImageCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *headImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
