@class BaseRequest, NSString, NSMutableArray;

@interface WeVisModelRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int sdkversion;
@property (retain, nonatomic) NSString *phonemodel;
@property (retain, nonatomic) NSMutableArray *localConfigList;
@property (nonatomic) unsigned int ffeversion;
@property (nonatomic) unsigned int mediaanalysisversion;

+ (void)initialize;

- (void)setMediaanalysisversion:(unsigned int)a0;
- (unsigned int)mediaanalysisversion;
- (void)setFfeversion:(unsigned int)a0;
- (unsigned int)ffeversion;
- (void)setLocalConfigList:(id)a0;
- (id)localConfigList;
- (void)setPhonemodel:(id)a0;
- (id)phonemodel;
- (void)setSdkversion:(unsigned int)a0;
- (unsigned int)sdkversion;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
