@class NSString;

@interface GetAllFunctionResponse_AlertInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL needAlert;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *btnText;

+ (void)initialize;

@end
