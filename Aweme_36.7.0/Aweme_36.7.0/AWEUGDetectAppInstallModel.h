@class NSString, NSDictionary;

@interface AWEUGDetectAppInstallModel : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) BOOL shouldShowPush;
@property (copy, nonatomic) NSString *pushURL;
@property (nonatomic) BOOL shouldJumpApp;
@property (copy, nonatomic) NSString *appURL;
@property (copy, nonatomic) NSDictionary *logExtra;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
