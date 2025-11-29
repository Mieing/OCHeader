@class NSString, UIImage, AWEIMMixPhotoRequestChainTracker, NSDictionary, AWEIMMangoShareTaskInfo, AWEIMMessageConversation, NSNumber, AWEIMMixPhotoInfo;

@interface AWEIMMixPhotoStartContext : AWEIMMixPhotoCommonJobContext

@property (copy, nonatomic) NSDictionary *templateExtra;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEIMMangoShareTaskInfo *taskInfo;
@property (copy, nonatomic) NSString *reflowMsgID;
@property (copy, nonatomic) NSString *reflowCid;
@property (retain, nonatomic) AWEIMMessageConversation *con;
@property (copy, nonatomic) NSString *style;
@property (nonatomic) int maxMember;
@property (retain, nonatomic) AWEIMMixPhotoInfo *photoInfo;
@property (retain, nonatomic) UIImage *shootImage;
@property (retain, nonatomic) AWEIMMixPhotoRequestChainTracker *tracker;
@property (copy, nonatomic) NSString *loraTaskId;
@property (copy, nonatomic) NSString *styleTitle;
@property (copy, nonatomic) NSString *AILoraID;
@property (copy, nonatomic) NSString *styleUrl;
@property (copy, nonatomic) NSString *templateType;
@property (nonatomic) long long shareTaskId;
@property (copy, nonatomic) NSString *loraStyleID;
@property (copy, nonatomic) id /* block */ didEnterOtherPageBlock;
@property (copy, nonatomic) id /* block */ onCompletionBlock;
@property (nonatomic) long long serverMessageID;
@property (nonatomic) BOOL supportOutShare;
@property (retain, nonatomic) NSNumber *preferContactPickerThemeStyle;

- (id)initWithRouterParams:(id)a0;
- (id)initWithStickerID:(id)a0 maxMember:(long long)a1 stickerCoverURL:(id)a2 isLora:(BOOL)a3;
- (id)initWithEffectInfo:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
- (BOOL)isLoraTemplate;
- (id)initWithShareActivityID:(id)a0 conversationID:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
