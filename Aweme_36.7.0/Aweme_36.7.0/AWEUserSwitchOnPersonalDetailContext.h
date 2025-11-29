@class NSString;

@interface AWEUserSwitchOnPersonalDetailContext : NSObject

@property (copy, nonatomic) id /* block */ finishComplete;
@property (copy, nonatomic) id /* block */ switchComplete;
@property (copy, nonatomic) NSString *fromUid;
@property (nonatomic) BOOL switchSuccess;

- (void).cxx_destruct;

@end
