@class SearchFingerprintResponse_ResponseData;

@interface SearchFingerprintResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SearchFingerprintResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
