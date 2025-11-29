@class NSString, NSData;

@interface AffFinderActionAsyncResult : WXPBGeneratedMessage

@property (nonatomic) long long ret;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSData *data;

+ (void)initialize;

@end
