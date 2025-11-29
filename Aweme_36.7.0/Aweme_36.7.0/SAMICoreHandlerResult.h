@class SAMICore;

@interface SAMICoreHandlerResult : NSObject

@property (retain, nonatomic) SAMICore *coreHandler;
@property (nonatomic) long long errorCode;

- (void).cxx_destruct;

@end
