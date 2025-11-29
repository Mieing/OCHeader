@class BUADServiceBuilder, NSString;

@interface BUADServiceBuildEntry : NSObject <BUADServiceBuildEntry>

@property (readonly, nonatomic) long long lifeCycle;
@property (retain, nonatomic) BUADServiceBuilder *builder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)lifeCycle;
- (id)extractObject:(id)a0;
- (void).cxx_destruct;

@end
