@class MMFinderLiveShopShelfSubPageHeaderView, RichTextView, NSString;

@interface MMFinderLiveShopShelfTipsPageView : UIView <MMFinderLiveShopShelfSubPageHeaderViewDelegate>

@property (retain, nonatomic) MMFinderLiveShopShelfSubPageHeaderView *headerView;
@property (retain, nonatomic) RichTextView *textView;
@property (copy, nonatomic) id /* block */ backAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
