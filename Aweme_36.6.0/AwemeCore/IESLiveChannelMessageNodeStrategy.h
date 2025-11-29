@class HTSEventContext, NSString, IESLiveBadgeFactory, IESLivePublicScreenNodeStyleConfig, HTSLiveTemplateEngineConfiguration, IESLiveEmojiTextParser, GPBMessage, NSParagraphStyle;
@protocol IESLiveRoomService, HTSLiveTemplateProvider;

@interface IESLiveChannelMessageNodeStrategy : NSObject <IESLiveChannelMessageNodeStrategy, IESLiveMessageNodeStrategyProtocol>

@property (retain, nonatomic) IESLiveEmojiTextParser *emoticonParser;
@property (retain, nonatomic) HTSLiveTemplateEngineConfiguration *config;
@property (retain, nonatomic) IESLiveBadgeFactory *badgeFactory;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long currentUserID;
@property (retain, nonatomic) GPBMessage *message;
@property (weak, nonatomic) id<HTSLiveTemplateProvider> templateProvider;
@property (nonatomic) double messageListWidth;
@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic) long long liveFontWeight;
@property (nonatomic) double liveFontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLivePublicScreenNodeStyleConfig *nodeStyleConfig;

- (id)getDisplayText;
- (void)refreshNode:(id)a0;
- (BOOL)isMyMessage;
- (id)localNameColor;
- (void)resetMessageNode:(id)a0;
- (void)loadBadgesWithNode:(id)a0;
- (void)assembleMessageListNode:(id)a0;
- (id)processDisplayText:(id)a0 needImagePlaceHolder:(id)a1 node:(id)a2;
- (void)updateNodeSize:(id)a0;
- (void)addActionsForNode:(id)a0 attributedString:(id)a1;
- (id)allIconList;
- (id)localContentColor;
- (double)fitedFontSize:(double)a0;
- (id)localUserColor;
- (id)createNode;
- (id)needLoadResourceURLsWithMessage:(id)a0;
- (void)updateDiggAttributedStringWithNode:(id)a0;
- (id)reProcessDisplayTextWithNode:(id)a0;
- (id)localShadow;
- (id)needLoadImageURLs;
- (void).cxx_destruct;
- (id)init;
- (double)getTopMargin;

@end
