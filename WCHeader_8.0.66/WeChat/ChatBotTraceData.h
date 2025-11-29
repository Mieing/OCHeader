@class NSString, ChatBotSourceInfo;

@interface ChatBotTraceData : WXPBGeneratedMessage

@property (nonatomic) int dataType;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *dataId;
@property (retain, nonatomic) NSString *dataMd5;
@property (retain, nonatomic) NSString *cdnDataUrl;
@property (retain, nonatomic) NSString *cdnDataKey;
@property (retain, nonatomic) NSString *thumbMd5;
@property (retain, nonatomic) NSString *cdnThumbUrl;
@property (retain, nonatomic) NSString *cdnThumbKey;
@property (retain, nonatomic) NSString *dataFmt;
@property (retain, nonatomic) ChatBotSourceInfo *srcInfo;

+ (void)initialize;

@end
