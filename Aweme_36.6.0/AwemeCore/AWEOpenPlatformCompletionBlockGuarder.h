@class NSString;

@interface AWEOpenPlatformCompletionBlockGuarder : NSObject

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long invocationCount;

- (void).cxx_destruct;
- (void)invoke;
- (void)dealloc;
- (id)initWithMessage:(id)a0;

@end
