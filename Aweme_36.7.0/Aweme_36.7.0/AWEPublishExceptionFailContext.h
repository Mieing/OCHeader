@class NSError, NSDictionary;

@interface AWEPublishExceptionFailContext : AWEPublishExceptionBaseContext

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *publishFailParams;

- (void).cxx_destruct;

@end
