@class NSString;

@interface BDTGKeyAttestationResult : BDTGCommonModel

@property (copy, nonatomic) NSString *attestKeyID;
@property (nonatomic) BOOL attestResult;
@property (copy, nonatomic) NSString *attestPubKey;
@property (copy, nonatomic) NSString *teePubKey;
@property (copy, nonatomic) NSString *reePubKey;
@property (copy, nonatomic) NSString *logID;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
