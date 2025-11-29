@class NSDictionary;

@interface AWEIMMessageConventorConventConfig : NSObject {
    BOOL _calculateConversationHint;
    BOOL _generateLiteMessage;
    BOOL _disableQuote;
    BOOL _isCombineShareSubMessage;
    long long _chatModelType;
    unsigned long long _msgScene;
    unsigned long long _msgSubScene;
    NSDictionary *_quoteMsgDic;
}

- (void).cxx_destruct;

@end
