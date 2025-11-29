@class NSString, NSMutableArray;

@interface StatusCommentResponse : WXPBGeneratedMessage

@property (nonatomic) BOOL result;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSMutableArray *info;

+ (void)initialize;

@end
