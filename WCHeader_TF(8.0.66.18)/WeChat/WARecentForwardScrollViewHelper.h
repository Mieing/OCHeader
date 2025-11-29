@class NSString, RecentForwardScrollView, UIView;
@protocol WARecentForwardScrollViewHelperDelegate;

@interface WARecentForwardScrollViewHelper : NSObject <RecentForwardScrollViewDelegate, IWARecentForwardScrollViewHelper>

@property (retain, nonatomic) RecentForwardScrollView *forwardView;
@property (weak, nonatomic) id<WARecentForwardScrollViewHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *internalView;

@end
