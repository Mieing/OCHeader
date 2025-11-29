@class NSString;

@interface SAMICore_ServerCommonContextCreateParameter : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) int tokenType;
@property (retain, nonatomic) NSString *businessType;
@property (retain, nonatomic) NSString *audioFormat;

- (void)dealloc;

@end
