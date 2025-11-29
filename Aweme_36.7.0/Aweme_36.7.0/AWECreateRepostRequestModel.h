@class NSString, NSArray, AWEIMStickerModel;

@interface AWECreateRepostRequestModel : NSObject

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *originItemId;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *repostId;
@property (copy, nonatomic) NSString *replyId;
@property (copy, nonatomic) NSString *replySubCommentID;
@property (copy, nonatomic) NSString *replySubCommentUsername;
@property (nonatomic) long long replyStyle;
@property (retain, nonatomic) NSArray *textExtraArray;
@property (retain, nonatomic) AWEIMStickerModel *sticker;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL isFromPaste;
@property (nonatomic) BOOL isForwardOnly;
@property (copy, nonatomic) NSString *lastCopyCommentID;

- (void).cxx_destruct;

@end
