@class NSDictionary;

@interface AWEKnowledgeRichContentImpl.FullPageFeedDataContext : AWEKnowledgeSwiftBasic.FullPageContainerContext <BDChainLogNodeHostProtocol, AWEFullPageFeedDataContextProtocol> {
    void /* unknown type, empty encoding */ lastSceneToken;
    void /* unknown type, empty encoding */ currentSceneToken;
    void /* unknown type, empty encoding */ listType;
    void /* unknown type, empty encoding */ listViewHolder;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ tabListContainer;
    void /* unknown type, empty encoding */ commentVC;
    void /* unknown type, empty encoding */ commentEnterMethod;
    void /* unknown type, empty encoding */ slideCount;
    void /* unknown type, empty encoding */ _editingCommentContent;
    void /* unknown type, empty encoding */ exitMethod;
    void /* unknown type, empty encoding */ isExitSlideOnImage;
    void /* unknown type, empty encoding */ isOuter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logExtraDict;
    void /* unknown type, empty encoding */ searchLogExtraDict;
    void /* unknown type, empty encoding */ priorityType;
    void /* unknown type, empty encoding */ isInPadHorizon;
    void /* unknown type, empty encoding */ contentInset;
    void /* unknown type, empty encoding */ isUsingPadAdapter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentTopInset;
    void /* unknown type, empty encoding */ highlightID;
    void /* unknown type, empty encoding */ insertIDs;
    void /* unknown type, empty encoding */ _sliderPlayMode;
    void /* unknown type, empty encoding */ progressViewType;
    void /* unknown type, empty encoding */ _currentPageMode;
    void /* unknown type, empty encoding */ shouldStopSingleLivePhotoPlaying;
    void /* unknown type, empty encoding */ enterTransitionType;
    void /* unknown type, empty encoding */ initialScrollAnchorType;
    void /* unknown type, empty encoding */ canDragDownBack;
    void /* unknown type, empty encoding */ enterModelOriginIndex;
    void /* unknown type, empty encoding */ needScrollToIndex;
    void /* unknown type, empty encoding */ _isLongPressPanelShowing;
    void /* unknown type, empty encoding */ _isSharePanelShowing;
    void /* unknown type, empty encoding */ _isCommentPanelShowing;
    void /* unknown type, empty encoding */ _isCommentInputViewShowing;
    void /* unknown type, empty encoding */ backToSchema;
    void /* unknown type, empty encoding */ searchParams;
    void /* unknown type, empty encoding */ adEventName;
    void /* unknown type, empty encoding */ albumDetailTransitionStatus;
    void /* unknown type, empty encoding */ cityInfoString;
    void /* unknown type, empty encoding */ commentExtraParams;
    void /* unknown type, empty encoding */ keepMuteState;
    void /* unknown type, empty encoding */ _isMute;
    void /* unknown type, empty encoding */ allowTrackStayTime;
    void /* unknown type, empty encoding */ forbidEndMultiPhotoConsume;
    void /* unknown type, empty encoding */ syncAutoplayWithMute;
    void /* unknown type, empty encoding */ albumFlowStyle;
    void /* unknown type, empty encoding */ isReplyCommentInputViewShowing;
    void /* unknown type, empty encoding */ placeHolderImage;
    void /* unknown type, empty encoding */ enablePreloadOpt;
    void /* unknown type, empty encoding */ enableDelayCommentLoad;
}

@property (nonatomic, copy) NSDictionary *logExtraDict;
@property (nonatomic) unsigned long long sliderPlayMode;
@property (nonatomic) unsigned long long initialPageMode;
@property (nonatomic) unsigned long long currentPageMode;

- (id)chainLogNodeParams;
- (BOOL)isChainLogGatewayNode;
- (void).cxx_destruct;
- (id)init;

@end
