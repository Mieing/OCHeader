@class NSString, AWEFeedSearchAIGCInputView, AWEAwemeModel;
@protocol AWEFeedPauseModalStyleManagerProtocol;

@interface AWESearchAIGCFeedPauseModalComponent : AWEFeedPauseModalBaseComponent <AWEFeedSearchAIGCInputViewDelegate> {
    id<AWEFeedPauseModalStyleManagerProtocol> _componentContainer;
}

@property (retain, nonatomic) AWEFeedSearchAIGCInputView *placeholderInputView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (unsigned long long)pauseModalBizType;
- (id)componentContainer;
- (void)setComponentContainer:(id)a0;
- (id)pauseContentWithModel:(id)a0;
- (id)updateViewWithModel:(id)a0;
- (void)inputViewDidClick:(id)a0 isFakeSendButtonArea:(BOOL)a1;
- (id)getShadingWord;
- (void)trackPlaceholderInputViewOnShow;
- (void)trackPlaceholderInputViewOnClick:(BOOL)a0;
- (void).cxx_destruct;

@end
