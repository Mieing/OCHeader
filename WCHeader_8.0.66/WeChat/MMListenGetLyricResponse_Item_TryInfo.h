@class NSString;

@interface MMListenGetLyricResponse_Item_TryInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int fullPlayLength;
@property (nonatomic) unsigned int tryBegin;
@property (nonatomic) unsigned int tryEnd;
@property (retain, nonatomic) NSString *fullLyric;
@property (retain, nonatomic) NSString *fullTranslateLyric;

+ (void)initialize;

@end
