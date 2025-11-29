@class NSString;

@interface IESLiveLinkRTCInteractRemoteStreamKey : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long streamIndex;

- (id)initWithUid:(id)a0 withRid:(id)a1 withIndex:(long long)a2;
- (void).cxx_destruct;

@end
