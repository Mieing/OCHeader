@class AWEIMMessage, NSString, NSNumber;
@protocol IESIMConversationProtocol;

@interface AWEIMResendMessageContext : NSObject <AWEIMResendCombineMsgUploadContext, AWEIMResendRefreshContext, AWEIMResendTranscodeContext, AWEIMResendUploadContext, AWEIMSenderResendContext>

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (copy, nonatomic) id /* block */ coverRefreshCompletionBlock;
@property (retain, nonatomic) NSNumber *didRefreshCoverFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;

- (void).cxx_destruct;

@end
