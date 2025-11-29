@class NSMutableArray, NSString, NSData, WxaPage, BaseResponse;

@interface SearchWxaResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int totalCount;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int subType;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) WxaPage *moreAction;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned int resultType;
@property (nonatomic) unsigned int nextId;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSData *debugBuf;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *msg;

+ (void)initialize;

@end
