@class NSMutableArray, BaseResponse;

@interface MassSendResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int dataStartPos;
@property (nonatomic) unsigned int thumbStartPos;
@property (nonatomic) unsigned int maxSupport;
@property (nonatomic) unsigned long long newMsgId;
@property (nonatomic) unsigned int newMsgIdForNewXmlCount;
@property (retain, nonatomic) NSMutableArray *newMsgIdForNewXmlList;

+ (void)initialize;

@end
