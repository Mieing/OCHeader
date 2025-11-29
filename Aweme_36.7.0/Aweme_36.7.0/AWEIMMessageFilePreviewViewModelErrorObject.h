@class NSString;

@interface AWEIMMessageFilePreviewViewModelErrorObject : NSObject

@property (nonatomic) long long errorReason;
@property (retain, nonatomic) NSString *errTips;
@property (nonatomic) BOOL canRetry;

- (void).cxx_destruct;
- (id)initWithReason:(long long)a0;

@end
