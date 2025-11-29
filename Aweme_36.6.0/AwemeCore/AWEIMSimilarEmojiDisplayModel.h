@class AWEIMMessage, AWEIMEmoticonModel, NSString, NSArray, NSNumber;
@protocol AWEIMSimilarEmojiDisplayTitleViewModelProtocol;

@interface AWEIMSimilarEmojiDisplayModel : NSObject <AWEIMSimilarEmojiDisplayQuickLookModelProtocol>

@property (retain, nonatomic) AWEIMMessage *giphyMessage;
@property (retain, nonatomic) AWEIMEmoticonModel *emoticonModel;
@property (retain, nonatomic) NSString *animationURL;
@property (retain, nonatomic) NSString *animationURI;
@property (retain, nonatomic) NSString *staticURL;
@property (retain, nonatomic) NSString *staticURI;
@property (retain, nonatomic) NSString *giphyName;
@property (nonatomic) BOOL canShowSeries;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *heycanIdentifier;
@property (retain, nonatomic) NSNumber *packageID;
@property (nonatomic) unsigned long long stickerType;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *sourceDescription;
@property (copy, nonatomic) NSString *sourceSchema;
@property (copy, nonatomic) NSString *activityDescription;
@property (copy, nonatomic) NSString *activitySchema;
@property (retain, nonatomic) id<AWEIMSimilarEmojiDisplayTitleViewModelProtocol> titleModel;
@property (retain, nonatomic) NSArray *buttonModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEmoticonModel:(id)a0;
- (void)asyncGetGiphyAuthName:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (void)setIMMessage:(id)a0;

@end
