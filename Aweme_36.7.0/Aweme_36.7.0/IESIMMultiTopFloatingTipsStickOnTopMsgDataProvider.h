@interface IESIMMultiTopFloatingTipsStickOnTopMsgDataProvider : AWEIMComponentBase <AWEIMStickOnTopMessageBannerWrapperViewModelDelegate, IESIMMultiTopFloatingTipsDataProviderInterface, IESIMMultiTopFloatingTipsStickOnTopMsgDataInterface> {
    void /* unknown type, empty encoding */ messageIdToMessageDict;
    void /* unknown type, empty encoding */ messageIdToWrapperViewModelDict;
    void /* unknown type, empty encoding */ messageIdToUniqueIdDict;
    void /* unknown type, empty encoding */ topFloatingTipsDataService;
    void /* unknown type, empty encoding */ stickOnTopMessageActionService;
    void /* unknown type, empty encoding */ messageListDataService;
    void /* unknown type, empty encoding */ topFloatingTipsService;
}

@property (nonatomic) long long type;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)startToProcessWithModels:(id)a0;
- (id)makeBarTextWithModel:(id)a0;
- (void)transferToUrlString:(id)a0 model:(id)a1;
- (void)removeAllWithModel:(id)a0;
- (void)didClickWithModel:(id)a0;
- (id)getTrackExtraParamsWithModel:(id)a0;
- (id)contentFromTheOldestStickOnTopMsg;
- (void)wrapperViewModel:(id)a0 didRecallMsg:(id)a1;
- (void)wrapperViewModel:(id)a0 didDeleteMsg:(id)a1;
- (void)wrapperViewModel:(id)a0 messageBecameUnavailable:(id)a1;
- (void)wrapperViewModel:(id)a0 messageContentChange:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
