@class NSError;

@interface IESGCPSKCombinedResultModel : NSObject

@property (nonatomic) unsigned long long hasDownload;
@property (nonatomic) unsigned long long hasLogin;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long sharkCheck;

- (void).cxx_destruct;

@end
