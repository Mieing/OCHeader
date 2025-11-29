@class NSString, IESLiveCommentMentionApi, IESLivePublicScreenContext, IESLiveIMMessageDecoder, HTSEventContext, IESLivePublicScreenView;

@interface IESLivePublicScreenMentionMsgAttachment : NSObject <IESLivePublicScreenEventObserver, IESLivePublicScreenMentionMsgProvider, IESLivePSCommonAttachmentProtocol>

@property (retain, nonatomic) IESLiveCommentMentionApi *api;
@property (retain, nonatomic) IESLiveIMMessageDecoder *messageDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreenView;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;

- (BOOL)shouldActive;
- (void)didNodeDisplayOnce:(id)a0;
- (void)publicScreenFirstStartRefresh:(id)a0;
- (void)handleMentionMsgIfExistInCommit:(id)a0 withPinManager:(id)a1;
- (id)abilityProtocol;
- (BOOL)checkFetchMentionMsgIfNeeded;
- (void)fetchMentionMsgsFromBackendData;
- (void)handleMentionMsgData:(id)a0;
- (void)fetchMentionMsgWithApiRequest;
- (BOOL)IsMentionMsg:(id)a0;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
