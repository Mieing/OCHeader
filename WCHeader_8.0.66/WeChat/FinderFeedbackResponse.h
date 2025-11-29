@class NSString, BaseResponse;

@interface FinderFeedbackResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
