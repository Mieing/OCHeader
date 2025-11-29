@class NSString, NSDictionary, UIImage, NSArray;

@interface AWESearchAIGCBubbleModel : MTLModel <MTLJSONSerializing, NSSecureCoding, AWESearchAIGCVideoCoverProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bubbleQuery;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long conversationRank;
@property (nonatomic) BOOL isLatest;
@property (nonatomic) BOOL sendFail;
@property (nonatomic) BOOL aigc_needDelete;
@property (nonatomic) BOOL aigc_needFold;
@property (retain, nonatomic) NSDictionary *appendRequestParams;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *tosid;
@property (nonatomic) long long imageWidth;
@property (nonatomic) long long imageHeight;
@property (copy, nonatomic) NSArray *imageURLList;
@property (nonatomic) BOOL shouldShowRotatePlaceholderImage;
@property (nonatomic) BOOL shouldShowBoxArrayAnimation;
@property (copy, nonatomic) NSArray *boxArray;
@property (nonatomic) long long selectedIndex;
@property (readonly, nonatomic) BOOL isQuestionQuery;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *preSearchId;
@property (nonatomic) BOOL isSplitVisonSearchMode;
@property (nonatomic) BOOL splitVisonSearchModeDisableTitle;
@property (nonatomic) BOOL splitVisonSearchModeV2p5Query;
@property (nonatomic) BOOL isShareState;
@property (nonatomic) double viewWidth;
@property (nonatomic) BOOL isDisablePublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSArray *videoImageURLList;
@property (nonatomic) long long videoImageHeight;
@property (nonatomic) long long videoImageWidth;
@property (retain, nonatomic) UIImage *videoImage;
@property (copy, nonatomic) NSString *leftTopTittle;
@property (nonatomic) BOOL isFromSevenSplitScreen;
@property (nonatomic) BOOL isEnterFullScreenFromSevenSplitScreen;
@property (nonatomic) double sevenSplitScreenProgress;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
