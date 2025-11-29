@class BaseRequest, NSString;

@interface FollowCardBDMchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *followParam;
@property (nonatomic) unsigned int posStateBefore;
@property (nonatomic) unsigned int posStateAfter;

+ (void)initialize;

@end
