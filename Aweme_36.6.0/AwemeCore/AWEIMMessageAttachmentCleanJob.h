@class NSString;

@interface AWEIMMessageAttachmentCleanJob : NSObject

@property (copy, nonatomic) NSString *jobName;
@property (copy, nonatomic) id /* block */ jobBlock;

- (void).cxx_destruct;

@end
