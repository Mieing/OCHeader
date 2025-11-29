@class NSString, FlowIMImageModelV2, FlowIMConversationPageInfo, NSArray, NSDictionary, FlowIMCellBizModel;
@protocol _TtP7FlowIMX13FlowIMMessage_, _TtP7FlowIMX9FlowIMBot_;

@interface FlowIMX.FlowIMConversationModel : NSObject <FlowIMX.FlowIMConversation> {
    void /* function */ conversationID;
    void /* function */ creatorID;
    void /* function */ name;
    void /* function */ conversationTemplates;
    void /* function */ briefMessageLocalId;
    void /* function */ ext;
    void /* function */ defaultOnBoardingStr;
    void /* function */ lastSectionId;
    void /* function */ conversationInfoTraceMap;
    void /* function */ bizModel;
    void /* function */ relatedCellID;
    void /* function */ cachedBotId;
    void /* unknown type, empty encoding */ p_briefMessage;
    void /* unknown type, empty encoding */ briefRWLock;
    void /* unknown type, empty encoding */ p_botInfo;
    void /* unknown type, empty encoding */ p_cellBizModel;
}

@property (nonatomic, copy) NSString *conversationID;
@property (nonatomic) long long botType;
@property (nonatomic, retain) FlowIMImageModelV2 *iconImage;
@property (nonatomic, copy) NSString *creatorID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long conversationStatus;
@property (nonatomic) BOOL pinned;
@property (nonatomic) BOOL isLocal;
@property (nonatomic, retain) FlowIMConversationPageInfo *conversationPage;
@property (nonatomic, copy) NSArray *conversationTemplates;
@property (nonatomic) long long messageCursor;
@property (nonatomic) long long cmdIndex;
@property (nonatomic) BOOL ttsEnable;
@property (nonatomic) long long conversationType;
@property (nonatomic) long long participantCount;
@property (nonatomic) long long badgeCount;
@property (nonatomic) long long readBadgeCount;
@property (nonatomic, copy) NSString *briefMessageLocalId;
@property (nonatomic, copy) NSDictionary *ext;
@property (nonatomic) long long version;
@property (nonatomic) long long lastReadIndex;
@property (nonatomic) long long latestIndex;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) long long contentDistType;
@property (nonatomic, copy) NSString *defaultOnBoardingStr;
@property (nonatomic) long long botConversationType;
@property (nonatomic) long long inputLeftButtonStyle;
@property (nonatomic) long long retentionCursor;
@property (nonatomic, copy) NSString *lastSectionId;
@property (nonatomic, copy) NSDictionary *conversationInfoTraceMap;
@property (nonatomic) long long reviewStatus;
@property (nonatomic, copy) NSString *bizModel;
@property (nonatomic) long long createScene;
@property (nonatomic) long long createChannel;
@property (nonatomic) long long cellType;
@property (nonatomic, copy) NSString *relatedCellID;
@property (nonatomic, copy) NSString *cachedBotId;
@property (nonatomic, readonly) id<_TtP7FlowIMX13FlowIMMessage_> briefMessage;
@property (nonatomic, readonly) id<_TtP7FlowIMX9FlowIMBot_> botInfo;
@property (nonatomic, readonly) FlowIMCellBizModel *cellBizModel;

- (void)refreshBotInfo;
- (void)refreshBotInfoWithBot:(id)a0;
- (BOOL)hasBotInfo;
- (void).cxx_destruct;
- (id)init;

@end
