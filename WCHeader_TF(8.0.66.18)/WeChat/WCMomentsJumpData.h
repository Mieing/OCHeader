@class NSString;

@interface WCMomentsJumpData : NSObject

@property (nonatomic) long long jumpDst;
@property (nonatomic) long long feedFoldType;
@property (nonatomic) long long jumpScene;
@property (nonatomic) long long isWsBlock;
@property (nonatomic) long long isWs;
@property (retain, nonatomic) NSString *snsSessionId;
@property (retain, nonatomic) NSString *snsObjectType;
@property (retain, nonatomic) NSString *snsUserName;
@property (retain, nonatomic) NSString *snsPublishId;

- (void).cxx_destruct;

@end
