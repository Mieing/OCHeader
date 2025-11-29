@class NSString, NSMutableArray;

@interface FinderLiveSticker : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *stickerId;
@property (nonatomic) unsigned int stickerType;
@property (retain, nonatomic) NSMutableArray *text;
@property (retain, nonatomic) NSMutableArray *pictureUrl;

+ (void)initialize;

@end
