@class NSString;

@interface FLTStatusOpenCommentDialogReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *statusId;
@property (nonatomic) BOOL isExpired;

+ (void)initialize;

@end
