@interface FlowAweme.FlowAwemeVideoSuggestComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMConversationServiceDelegate> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ fromItemId;
    void /* unknown type, empty encoding */ videoItemId;
    void /* unknown type, empty encoding */ llmFakePrompt;
    void /* unknown type, empty encoding */ llmFakeResponse;
    void /* unknown type, empty encoding */ messageSendExt;
    void /* unknown type, empty encoding */ videoPromptsResult;
    void /* unknown type, empty encoding */ videoSummaryResult;
    void /* unknown type, empty encoding */ videoSummaryFailed;
    void /* unknown type, empty encoding */ videoSuggestMessages;
    void /* unknown type, empty encoding */ videoSummaryMessages;
    void /* unknown type, empty encoding */ clearContextMessage;
    void /* unknown type, empty encoding */ insertSuggestModeEnable;
    void /* unknown type, empty encoding */ insertSummmaryModeEnable;
    void /* unknown type, empty encoding */ videoSuggestContent;
    void /* unknown type, empty encoding */ videoSuggestData;
    void /* unknown type, empty encoding */ videoSummaryData;
    void /* unknown type, empty encoding */ videoSummaryPromptRequesting;
    void /* unknown type, empty encoding */ videoSuggestPromptRequesting;
    void /* unknown type, empty encoding */ refreshCompletion;
    void /* unknown type, empty encoding */ suggestCompletion;
    void /* unknown type, empty encoding */ _refreshCompletionBlock;
    void /* unknown type, empty encoding */ _refreshSummaryCompletionBlock;
    void /* unknown type, empty encoding */ _dataController;
    void /* unknown type, empty encoding */ placeholderMessageMessageID;
}

- (void)conversationHistoryDidClear:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
