@class DownloadResultNotification, NSString, NSDictionary, NSError;

@interface CKDownloadCompletionModel : NSObject

@property (retain, nonatomic) DownloadResultNotification *notificationInfo;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) double downloadDuration;

+ (id)initWithNotificationInfo:(id)a0;

- (void).cxx_destruct;

@end
