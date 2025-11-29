@class NSString, AWEShareContext;

@interface AWEIMShareToSingleChatContentProviderImageImpl : NSObject <AWEIMShareToSingleChatContentProviderProtocol>

@property (retain, nonatomic) AWEShareContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareContentViewInShareToSingleCardView;
- (struct CGSize { double x0; double x1; })shareContentViewSizeInShareToSingleCardView;
- (void)configTitleLable:(id)a0 userIcon:(id)a1 usernameLabel:(id)a2;
- (id)contentImageUrlString;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
