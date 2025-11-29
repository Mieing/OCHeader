@class NSString;

@interface BDRemoteStreamKey : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long streamIndex;

- (void).cxx_destruct;

@end
