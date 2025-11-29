@class NSString, NSMutableArray;

@interface StatusIconResponse : WXPBGeneratedMessage

@property (nonatomic) BOOL result;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSMutableArray *icons;

+ (void)initialize;

@end
