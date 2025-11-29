@class NSString, NSDictionary;

@interface DYAAwemeAccountModel : MTLModel <DYARawDataProtocol, MTLJSONSerializing>

@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL isInDeactivateBufferPeriod;
@property (copy, nonatomic) NSDictionary *rawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)mergeFromLiteInfo:(id)a0;
- (void).cxx_destruct;

@end
