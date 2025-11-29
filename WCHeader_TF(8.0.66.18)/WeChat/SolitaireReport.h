@class NSString;

@interface SolitaireReport : NSObject

@property (retain, nonatomic) NSString *nsChatName;
@property (retain, nonatomic) NSString *nsLaunchUserName;
@property (retain, nonatomic) NSString *nsCurMsgUserName;
@property (nonatomic) long long sessionID;
@property (retain, nonatomic) NSString *nsIdentifier;

- (id)initWithSolitaire:(id)a0;
- (void)report;
- (void).cxx_destruct;

@end
