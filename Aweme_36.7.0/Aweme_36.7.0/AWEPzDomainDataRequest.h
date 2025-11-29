@class NSString, AWEPzDomainDataResponse;

@interface AWEPzDomainDataRequest : NSObject

@property (copy, nonatomic) NSString *domainName;
@property (copy, nonatomic) NSString *dataHash;
@property (retain, nonatomic) AWEPzDomainDataResponse *response;

- (void).cxx_destruct;
- (id)description;

@end
