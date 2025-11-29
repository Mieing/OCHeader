@class NSString, NSDate;

@interface SuperResTask : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *sequenceId;
@property (retain, nonatomic) NSDate *createTime;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;

- (void).cxx_destruct;

@end
