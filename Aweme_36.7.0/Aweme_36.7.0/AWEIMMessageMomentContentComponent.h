@class NSString;

@interface AWEIMMessageMomentContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (BOOL)p_needShowCloseFriendsFeed:(id)a0;
+ (void)p_showCloseFriendsMomentDetailWithCell:(id)a0 messageListVC:(id)a1 displayMessage:(id)a2 context:(id)a3;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)didTappedCover;
- (BOOL)p_needShowCloseFriendsFeed;
- (void)p_showCloseFriendsMomentDetailWithCell:(id)a0 messageListVC:(id)a1;
- (id)displayMessage;

@end
