@class AWEPzDomainModel;

@interface AWEPzDomainDataResponse : NSObject

@property (nonatomic) long long result;
@property (retain, nonatomic) AWEPzDomainModel *domainModel;

- (id)initWithResult:(long long)a0 domainModel:(id)a1;
- (void).cxx_destruct;

@end
