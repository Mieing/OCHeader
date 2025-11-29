@class AWEIMWaittingReplyLoadingView, NSString;

@interface AWEIMMessageText_SilverWing_Loading_Plugin : AWEIMFlexComponent <AWEIMMessageTextPluginProtocol>

@property (retain, nonatomic) AWEIMWaittingReplyLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)attributedContent;
- (void)componentDidMounted:(id)a0;
- (void)afterRenderCellDidFinished;
- (id)getLoadingStr:(double)a0;
- (void).cxx_destruct;
- (id)contentAttributes;
- (id)displayMessage;

@end
