@interface AWECommentInputViewSwiftImpl.CommentInputViewFactory : NSObject <AWECommentInputViewFactoryProtocol>

- (id)publishGuidanceViewWithColorMode:(unsigned long long)a0;
- (id)makePanelInputViewWithGlobalContext:(id)a0 config:(id)a1;
- (id)makeInputViewWithGlobalContext:(id)a0 config:(id)a1;
- (id)inputViewConfigWithSceneType:(long long)a0;
- (id)generateInputViewJSBHunterConfig:(id)a0 elementDisplayConfig:(id)a1 albumPickerConfig:(id)a2 otherConfig:(id)a3;
- (id)evaluationView;
- (id)createEvaluationPage:(id)a0 params:(id)a1;
- (id)init;

@end
