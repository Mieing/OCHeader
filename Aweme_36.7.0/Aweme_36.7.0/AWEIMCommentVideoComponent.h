@class NSString;

@interface AWEIMCommentVideoComponent : AWEIMFlexComponent <AWEIMCommentVideoInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_createPresenter;
- (void)p_updateProps;
- (id)p_mediaBackgroundColor:(id)a0;
- (void)coverDidTapped;
- (id)commentVideoView;
- (id)commentShareMessage;

@end
