@class NSString, NSError;

@interface UploadInfo : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long status;
@property (nonatomic) float progress;
@property (nonatomic) long long hadUploadedSize;
@property (nonatomic) long long totalFileSize;
@property (nonatomic) long long uploadSpeed;
@property (retain, nonatomic) NSError *error;

- (id)initWithInfo:(id)a0 status:(long long)a1 progress:(float)a2 hadUploadedSize:(long long)a3 totalFileSize:(long long)a4 uploadSpeed:(long long)a5 error:(id)a6;
- (void).cxx_destruct;

@end
