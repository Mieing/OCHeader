@class BaseRequest, NSString;

@interface WeAppSearchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *keyWord;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int cliVersion;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned int displayPattern;
@property (nonatomic) double locationX;
@property (nonatomic) double locationY;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *keywordId;
@property (retain, nonatomic) NSString *wordingId;
@property (retain, nonatomic) NSString *suggestionId;
@property (nonatomic) unsigned int suggestionPos;
@property (retain, nonatomic) NSString *suggestionBuf;

+ (void)initialize;

@end
