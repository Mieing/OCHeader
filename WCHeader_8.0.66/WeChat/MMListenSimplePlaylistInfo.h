@class NSString, NSData;

@interface MMListenSimplePlaylistInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) int type;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) unsigned int itemNum;
@property (retain, nonatomic) NSData *ctxBuf;
@property (nonatomic) int playType;

+ (void)initialize;

@end
