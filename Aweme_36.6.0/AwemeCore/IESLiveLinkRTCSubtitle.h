@class NSString;

@interface IESLiveLinkRTCSubtitle : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long sequence;
@property (nonatomic) BOOL definite;

- (void).cxx_destruct;

@end
