@protocol ACCQuickStoryShareServiceProtocol;

@interface AWEShareStudioSaveLocalChannel : AWEShareBaseChannel

@property (weak, nonatomic) id<ACCQuickStoryShareServiceProtocol> accService;

- (void)shareWithCompletion:(id /* block */)a0;
- (BOOL)isShareItemEnabled;
- (BOOL)prepareToShare;
- (id)initWithACCService:(id)a0;
- (void).cxx_destruct;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end
