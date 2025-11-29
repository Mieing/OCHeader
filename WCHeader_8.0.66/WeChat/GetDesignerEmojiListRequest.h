@class NSString, SKBuiltinBuffer_t, NSData;

@interface GetDesignerEmojiListRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) SKBuiltinBuffer_t *pageBuf;
@property (nonatomic) unsigned int tagId;
@property (retain, nonatomic) NSString *keyWord;
@property (nonatomic) unsigned int setId;
@property (nonatomic) unsigned long long searchId;
@property (nonatomic) BOOL needUgcemoji;
@property (retain, nonatomic) NSData *extPageContext;

+ (void)initialize;

@end
