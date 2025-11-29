@class NSString;

@interface IESECOrderListCacheKeyInfo : NSObject

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) unsigned long long tabId;
@property (copy, nonatomic) NSString *bizIdentity;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithContext:(id)a0;

@end
