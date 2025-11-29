@class NSDictionary;

@interface HMUploadInfoParam : NSObject

@property (nonatomic) BOOL isSuccess;
@property (nonatomic) int quota;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *detailInfo;

- (void).cxx_destruct;

@end
