@class NSString;

@interface IESLiveLinkRTCInteractLiveRTCExtInfo : NSObject

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *interactId;
@property (nonatomic) BOOL visibility;
@property (nonatomic) long long bizTypeEx;

+ (id)initWithInfo:(id)a0 visibility:(BOOL)a1;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (void)reset;

@end
