@class NSString, IESLiveCommentContext;

@interface IESLiveCommentVoiceInputPanelViewModel : NSObject

@property (retain, nonatomic) IESLiveCommentContext *commentContext;
@property (copy, nonatomic) NSString *voiceToTextStr;

- (id)voiceRouter;
- (void).cxx_destruct;

@end
