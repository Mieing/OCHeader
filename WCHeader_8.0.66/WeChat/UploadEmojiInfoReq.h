@class NSString, NSData, NSMutableArray;

@interface UploadEmojiInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (nonatomic) int startPos;
@property (nonatomic) int totalLen;
@property (retain, nonatomic) NSData *emojiBuffer;
@property (nonatomic) BOOL isSelfie;
@property (retain, nonatomic) NSMutableArray *attachedEmojiMd5List;
@property (retain, nonatomic) NSString *attachedText;
@property (retain, nonatomic) NSString *followingEmojiMd5;
@property (retain, nonatomic) NSString *lensId;
@property (retain, nonatomic) NSString *attachedTextColor;

+ (void)initialize;

@end
