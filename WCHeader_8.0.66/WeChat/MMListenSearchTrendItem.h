@class NSString, NSMutableArray;

@interface MMListenSearchTrendItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *searchWord;
@property (retain, nonatomic) NSMutableArray *recommendWords;
@property (retain, nonatomic) NSString *listenInfo;
@property (retain, nonatomic) NSString *searchInfo;

+ (void)initialize;

@end
