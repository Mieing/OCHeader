@class NSArray, NSString, AWEURLModel;

@interface AWEIMShareStickerContent : AWEIMMessageContent

@property (retain, nonatomic) NSArray *videoCoverURLs;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) NSString *stickerName;
@property (nonatomic) long long userCount;
@property (retain, nonatomic) NSString *stickerID;
@property (nonatomic) BOOL isImageTemplateSticker;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentDictionary;

@end
