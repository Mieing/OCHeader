@interface BDDPPageFaultInfo : NSObject

@property (nonatomic) long long pMajFlt;
@property (nonatomic) long long pMinFlt;

- (id)init;

@end
