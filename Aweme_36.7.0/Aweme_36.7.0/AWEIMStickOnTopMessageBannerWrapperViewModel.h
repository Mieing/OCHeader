@class AWEIMUserViewModel, AWEIMMessage, NSString, AWEIMCollapsibleBannerViewModel;
@protocol AWEIMStickOnTopMessageBannerWrapperViewModelDelegate;

@interface AWEIMStickOnTopMessageBannerWrapperViewModel : NSObject <AWEIMFeedVideoMsgUnavailableStatusUpdatesObserver>

@property (retain, nonatomic) AWEIMUserViewModel *fromUserViewModel;
@property (weak, nonatomic) id<AWEIMStickOnTopMessageBannerWrapperViewModelDelegate> delegate;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEIMCollapsibleBannerViewModel *banner;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *barText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateUnavailableStatusForMessage:(id)a0;
- (void)didUpdateContentTitleForMessage:(id)a0 itemID:(id)a1;
- (void)didEditContentTitleForMessage:(id)a0;
- (void)bindVM;
- (id)__senderName;
- (void)__recalculateContent;
- (id)__contentWithMessage:(id)a0;
- (id)initWithMessage:(id)a0 banner:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMessage:(id)a0 delegate:(id)a1;

@end
