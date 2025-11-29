@class NSString;

@interface BioPayV2AuthenRequest_BioPayV2ValidateMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned long long counter;
@property (retain, nonatomic) NSString *cpuId;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *raw;
@property (retain, nonatomic) NSString *fid;
@property (nonatomic) int rsaPssSaltlen;
@property (retain, nonatomic) NSString *fpN;

+ (void)initialize;

@end
