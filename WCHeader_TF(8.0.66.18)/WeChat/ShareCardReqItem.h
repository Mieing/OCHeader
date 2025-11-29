@class NSString;

@interface ShareCardReqItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *cardTpId;
@property (retain, nonatomic) NSString *cardExt;
@property (retain, nonatomic) NSString *jsCheckinfoUrl;
@property (retain, nonatomic) NSString *jsCheckinfoSessionUsername;
@property (nonatomic) unsigned int statisticScene;
@property (retain, nonatomic) NSString *comment;

+ (void)initialize;

@end
