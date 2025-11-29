@class NSString;
@protocol BDXPagerViewListViewDelegate;

@interface BDXPageListView : UIView <BDXCategoryListContentViewDelegate, BDXPagerViewListViewDelegate>

@property (weak, nonatomic) id<BDXPagerViewListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
