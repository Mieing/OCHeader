@class NSMutableArray;

@interface SearchFingerprintResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *searchResultArray;
@property (readonly, nonatomic) unsigned long long searchResultArray_Count;

+ (id)descriptor;

@end
