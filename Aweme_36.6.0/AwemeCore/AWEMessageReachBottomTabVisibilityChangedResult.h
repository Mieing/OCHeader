@class NSString;

@interface AWEMessageReachBottomTabVisibilityChangedResult : NSObject <AWEMessageReachTabVisibilityChangedResult>

@property (nonatomic) BOOL canShowBadge;
@property (nonatomic) BOOL canShowBubble;
@property (nonatomic) double tabVisiblePercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
