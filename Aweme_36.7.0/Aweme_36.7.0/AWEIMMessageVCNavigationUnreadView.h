@class NSString;
@protocol AWEIMNavigationUnreadViewDelegate;

@interface AWEIMMessageVCNavigationUnreadView : AWEIMNavigationUnreadView <AWEIMMessageVCNavigationUnreadViewProtocol>

@property (weak, nonatomic) id<AWEIMNavigationUnreadViewDelegate> delegate;
@property (nonatomic) BOOL shouldHideUnreadCount;
@property (nonatomic) long long sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithCount:(long long)a0;

@end
