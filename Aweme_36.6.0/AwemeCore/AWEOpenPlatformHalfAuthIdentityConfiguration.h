@class NSArray, AWEOpenPlatformAuthFlowManager;

@interface AWEOpenPlatformHalfAuthIdentityConfiguration : NSObject

@property (retain, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (copy, nonatomic) NSArray *scopeItems;
@property (nonatomic) unsigned long long scopeType;

- (void).cxx_destruct;

@end
