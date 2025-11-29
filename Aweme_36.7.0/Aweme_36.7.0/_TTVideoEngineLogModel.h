@class NSString;

@interface _TTVideoEngineLogModel : NSObject

@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *logInfo;
@property (nonatomic) double leftHeight;
@property (nonatomic) double rightHeight;
@property (nonatomic) double lastViewWidth;
@property (nonatomic) long long logType;
@property (nonatomic) double viewWidth;

+ (id)_dateString;
+ (id)item:(id)a0;

- (void).cxx_destruct;
- (double)cellHeight;

@end
