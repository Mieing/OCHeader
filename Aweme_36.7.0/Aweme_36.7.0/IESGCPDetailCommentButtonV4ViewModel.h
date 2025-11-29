@class IESGCPDetailCommentButtonStyle, IESGCPPBCommentButton, NSString;

@interface IESGCPDetailCommentButtonV4ViewModel : IESGCPDetailUniversalButtonViewModel <IESGCPDIContextSubscriber>

@property (nonatomic) unsigned long long commentButtonStyleType;
@property (retain, nonatomic) IESGCPPBCommentButton *pbModel;
@property (readonly, nonatomic) IESGCPDetailCommentButtonStyle *commentButtonStyle;
@property (readonly, nonatomic) BOOL isCompletedComment;
@property (copy, nonatomic) id /* block */ updateViewStyleBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)updateViewStyle;
- (void)handleButtonDidClick;
- (void)updateContentData:(id)a0;
- (void)parseButtonStyle;
- (id)parseButtonStyleWithContent:(id)a0;
- (id)buttonTypeStyleKey;
- (void)publishEvaluationSuccess:(id)a0;
- (void)deleteEvaluationSuccess:(id)a0;
- (void)reloadComponentData;
- (void).cxx_destruct;
- (void)openURL:(id)a0;
- (void)setContent:(id)a0;

@end
