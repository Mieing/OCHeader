@class NSString;
@protocol OSpeechHostInjectionCallback;

@interface OSpeechHostInjectionCreateTaskParam : NSObject

@property (retain, nonatomic) NSString *businessInfo;
@property (retain, nonatomic) NSString *dumpPath;
@property (retain, nonatomic) id<OSpeechHostInjectionCallback> userCallback;

- (void).cxx_destruct;

@end
