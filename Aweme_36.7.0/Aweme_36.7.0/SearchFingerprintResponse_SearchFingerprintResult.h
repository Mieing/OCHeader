@class NSString;

@interface SearchFingerprintResponse_SearchFingerprintResult : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *foldingInfo;
@property (copy, nonatomic) NSString *lyricInfo;

+ (id)descriptor;

@end
