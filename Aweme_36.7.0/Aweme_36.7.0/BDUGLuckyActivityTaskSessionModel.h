@class NSString;

@interface BDUGLuckyActivityTaskSessionModel : NSObject

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *globalTaskId;
@property (nonatomic) long long index;
@property (nonatomic) BOOL canAssociateBusinessEvent;

- (void).cxx_destruct;

@end
