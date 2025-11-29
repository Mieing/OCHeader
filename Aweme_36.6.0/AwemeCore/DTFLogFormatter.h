@class NSString;

@interface DTFLogFormatter : NSObject

@property (retain, nonatomic) NSString *sdkVersion;

+ (id)resolutionString;
+ (id)getDatetimeString:(double)a0;
+ (id)keyPaths;
+ (id)timestampString;

- (id)stringFromLog:(id)a0;
- (id)fillAddtionField:(id)a0;
- (void)verifyLog:(id)a0;
- (void).cxx_destruct;

@end
