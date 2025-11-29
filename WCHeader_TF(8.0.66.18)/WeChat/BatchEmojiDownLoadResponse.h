@class NSString, NSData, NSMutableArray, BaseResponse;

@interface BatchEmojiDownLoadResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int index;
@property (retain, nonatomic) NSMutableArray *md5List;
@property (nonatomic) unsigned int endFlag;
@property (retain, nonatomic) NSMutableArray *emojiList;
@property (retain, nonatomic) NSData *reqBuff;
@property (retain, nonatomic) NSMutableArray *needUpdate;
@property (retain, nonatomic) NSString *versionKey;

+ (void)initialize;

@end
