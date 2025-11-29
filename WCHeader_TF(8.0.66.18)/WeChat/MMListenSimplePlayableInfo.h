@class NSString, NSData;

@interface MMListenSimplePlayableInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *finderFeedId;
@property (retain, nonatomic) NSString *finderNonceId;
@property (retain, nonatomic) NSString *finderExportId;
@property (retain, nonatomic) NSData *ctxBuf;
@property (nonatomic) int playType;

+ (id)parseFromDictionary:(id)a0;
+ (void)initialize;

@end
