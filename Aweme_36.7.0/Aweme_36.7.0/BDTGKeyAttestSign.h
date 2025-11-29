@class NSString;

@interface BDTGKeyAttestSign : BDTGCommonModel

@property (copy, nonatomic) NSString *reqSign;
@property (copy, nonatomic) NSString *reqContent;
@property (copy, nonatomic) NSString *secTs;
@property (nonatomic) long long timestamp;

- (id)initWithReqSign:(id)a0 reqContent:(id)a1 secTs:(id)a2 timestamp:(long long)a3;
- (void).cxx_destruct;

@end
