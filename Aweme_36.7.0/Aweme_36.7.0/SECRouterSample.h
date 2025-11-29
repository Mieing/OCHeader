@class NSString;

@interface SECRouterSample : NSObject <SECTessaSample>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *sampleIdentifier;
@property (copy, nonatomic) NSString *checkinURL;
@property (copy) NSString *checkoutURL;
@property (nonatomic) double happen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sampleProps;
- (id)initWithHybrid:(id)a0 tessa:(id)a1;
- (id)initWithRouter:(id)a0 tessa:(id)a1;
- (void).cxx_destruct;
- (double)timestamp;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sampleId;

@end
