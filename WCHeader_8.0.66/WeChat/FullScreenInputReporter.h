@class NSString;

@interface FullScreenInputReporter : NSObject

@property (nonatomic) unsigned int chatType;
@property (retain, nonatomic) NSString *sessionID;

+ (id)reporter;
+ (void)reportAction:(unsigned int)a0;

- (void).cxx_destruct;

@end
