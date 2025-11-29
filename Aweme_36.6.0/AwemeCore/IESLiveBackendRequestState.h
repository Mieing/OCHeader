@interface IESLiveBackendRequestState : NSObject

@property (nonatomic) unsigned long long requestState;

- (BOOL)validRequest;

@end
