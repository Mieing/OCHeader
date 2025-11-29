@class NSString;

@interface AFDPlayRemoteSessionStore : NSObject

@property (retain, nonatomic) NSString *firstAwemeID;
@property (nonatomic) BOOL hadReceiveCommandPlay;
@property (nonatomic) BOOL hadMixFeedRequestComplete;

- (void).cxx_destruct;
- (void)reset;

@end
