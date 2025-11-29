@class IESLivePublicScreenNodeStyleConfig, NSString, IESLivePublicScreenCommonMessageParser, GPBMessage;
@protocol IESLiveRoomService;

@interface IESLiveMessageNodeStrategy : NSObject <IESLiveMessageNodeStrategyProtocol>

@property (nonatomic) BOOL clickActionOptimize;
@property (nonatomic) BOOL messageInsetsOptimize;
@property (nonatomic) BOOL enableInsetsOpt;
@property (nonatomic) long long othersMessageLikeShowCount;
@property (retain, nonatomic) GPBMessage *message;
@property (nonatomic) double memberEnterIntervalMS;
@property (nonatomic) double likeMessageIntervalMS;
@property (nonatomic) long long currentPublicScreenHeat;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *currentUserID;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLivePublicScreenCommonMessageParser *messageParser;
@property (retain, nonatomic) IESLivePublicScreenNodeStyleConfig *nodeStyleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getDisplayText;
- (void)updateAttachmentIfNeed:(id)a0;
- (struct CGSize { double x0; double x1; })innerViewSizeWithMaxLayoutWidth:(double)a0 node:(id)a1;
- (void)handleMentionWithNode:(id)a0;
- (BOOL)doFilterForMessageList:(id)a0;
- (void)updateNodeOnCreated:(id)a0;
- (void)addNodeAction:(id)a0 withDisplayText:(id)a1 startLocation:(unsigned long long)a2;
- (BOOL)isMyMessage:(id)a0;
- (void)jointAttributedString:(id)a0 withMessage:(id)a1;
- (id)needLoadOtherImageURLsForMessage:(id)a0;
- (void)resetMessageNode:(id)a0;
- (void)updateNodeSize:(id)a0;
- (id)createNode;
- (id)needLoadResourceURLsWithMessage:(id)a0;
- (void)updateDiggAttributedStringWithNode:(id)a0;
- (id)attributedStringWithDisplayText:(id)a0;
- (BOOL)isUserSide:(id)a0;
- (BOOL)needFoldForMessage:(id)a0;
- (BOOL)enableFoldBy:(long long)a0 defaultValue:(BOOL)a1;
- (BOOL)needHandleAttributedStringForMessage:(id)a0;
- (id)updateMessageNode:(id)a0;
- (void)handleAttributedString:(id)a0;
- (void)processNodeForCommon:(id)a0;
- (void)addNodeActionWithNode:(id)a0;
- (void)setupJointConfigForAttributedString:(id)a0;
- (void)appendSuffixText:(id)a0 to:(id)a1;
- (void)addNodeActionWithServerNode:(id)a0;
- (void)addNodeActionWithLocalNode:(id)a0;
- (id)config;
- (void).cxx_destruct;
- (double)getTopMargin;

@end
