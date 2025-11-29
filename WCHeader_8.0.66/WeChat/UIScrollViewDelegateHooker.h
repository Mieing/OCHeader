@class NSString, FavBrowseDetailData;

@interface UIScrollViewDelegateHooker : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) id originalDelegate;
@property (weak, nonatomic) FavBrowseDetailData *browseData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
