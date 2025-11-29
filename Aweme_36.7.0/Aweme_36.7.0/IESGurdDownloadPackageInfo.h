@class NSError;

@interface IESGurdDownloadPackageInfo : NSObject

@property (nonatomic, getter=isSuccessful) BOOL successful;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic, getter=isPatch) BOOL patch;
@property (nonatomic) unsigned long long packageId;
@property (nonatomic) long long downloadDuration;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic) long long downloadPriority;

- (void).cxx_destruct;
- (id)description;

@end
