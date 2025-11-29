@class NSString, NSNumber;

@interface IESGCPCgGetMapPlayDataRecordModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *recordId;
@property (retain, nonatomic) NSNumber *startRecordTime;
@property (retain, nonatomic) NSNumber *maxSupportRecordTime;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *size;
@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *errorMsg;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
