@class NSString, AWECommentPanelTabBasicParams;
@protocol AWECommentViewControllerTabSettingProtocol;

@interface AWECommentPanelTabContext : AWEPageContext <AWECommentBaseContextProtocol>

@property (readonly, nonatomic) id data;
@property (readonly, nonatomic) AWECommentPanelTabBasicParams *basicParams;
@property (readonly, nonatomic) id<AWECommentViewControllerTabSettingProtocol> tabParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 BasicParams:(id)a1 tabParams:(id)a2;
- (id)comment_superContext;
- (void).cxx_destruct;

@end
