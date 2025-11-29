@class NSString, NSArray;

@interface TTAccountChainLoginProviderConfig : NSObject

@property (copy, nonatomic) NSString *conflictSecUserId;
@property (nonatomic) unsigned long long timeout;
@property (copy, nonatomic) NSArray *providersAppId;

- (void).cxx_destruct;

@end
