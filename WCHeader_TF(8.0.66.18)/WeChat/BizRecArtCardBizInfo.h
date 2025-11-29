@class NSString, NSMutableArray;

@interface BizRecArtCardBizInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *brandIconUrl;
@property (retain, nonatomic) NSString *appMsgRecReason;
@property (retain, nonatomic) NSMutableArray *appMsg;
@property (retain, nonatomic) NSMutableArray *negativeFeedbackReason;
@property (nonatomic) unsigned int showNegativeFeedbackReason;
@property (retain, nonatomic) NSString *negativeFeedbackTitle;

+ (void)initialize;

@end
