@class NSString;

@interface BDPExtLogFileInfoModel : NSObject

@property (copy, nonatomic) NSString *newestFileName;
@property (copy, nonatomic) NSString *oldestFileName;
@property (nonatomic) long long fileCount;

- (void).cxx_destruct;
- (id)init;

@end
