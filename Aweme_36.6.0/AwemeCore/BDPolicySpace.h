@class NSString;

@interface BDPolicySpace : NSObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *certType;

+ (id)createWithDomain:(id)a0;
+ (id)possibleUidsForCertUnit:(id)a0;
+ (id)createWithDomain:(id)a0 certType:(id)a1;

- (void).cxx_destruct;
- (id)uniqueId;

@end
