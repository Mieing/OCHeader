@class NSString, NSDictionary, CMessageWrap;

@interface BrandProfileEnterInfo : NSObject

@property (nonatomic) unsigned int enterScene;
@property (nonatomic) unsigned int userType;
@property (nonatomic) unsigned int qrCodeScene;
@property (copy, nonatomic) NSString *sendUser;
@property (copy, nonatomic) NSString *chatUser;
@property (copy, nonatomic) NSString *firstUrl;
@property (copy, nonatomic) NSString *lastUrl;
@property (copy, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) CMessageWrap *sourceMessage;
@property (nonatomic) unsigned int sessionType;
@property (nonatomic) unsigned long long brandTLRecCardId;
@property (copy, nonatomic) NSString *channelSessionId;
@property (retain, nonatomic) NSString *sceneNote;
@property (nonatomic) unsigned int productId;
@property (copy, nonatomic) NSString *finderBuffer;
@property (copy, nonatomic) NSString *finderExtraData;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) int scanSubScene;
@property (copy, nonatomic) NSDictionary *brandFinderJumpInfoDic;
@property (nonatomic) unsigned int finderSubScene;
@property (nonatomic) BOOL isFromFinder;
@property (copy, nonatomic) NSString *luckMoneySpringEventUrl;
@property (nonatomic) unsigned long long pageMode;
@property (nonatomic) BOOL scrollToTab;
@property (nonatomic) int bizFromScene;
@property (nonatomic) unsigned int openArticleFromScene;
@property (nonatomic) BOOL enterForManagementScene;
@property (nonatomic) unsigned int enterItemShowType;
@property (retain, nonatomic) NSDictionary *dictRawEnterInfo;

- (id)init;
- (void)updateInfoFromCardMessage:(id)a0;
- (void)updateInfoFromWebViewController:(id)a0;
- (void)updateInfoFromWAHTMLWebViewController:(id)a0;
- (void)updateChatUserType;
- (void).cxx_destruct;

@end
