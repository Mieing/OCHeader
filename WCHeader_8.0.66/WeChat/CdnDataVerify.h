@class NSString, NSMutableArray;

@interface CdnDataVerify : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *expectedFilemd5;
@property (nonatomic) unsigned long long expectedFilesize;
@property (nonatomic) unsigned long long filesizeMax;
@property (retain, nonatomic) NSMutableArray *httpHeader;

+ (void)initialize;

@end
