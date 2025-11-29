@class NSString;

@interface IESLiveOpenPlatformAuthModel : NSObject

@property (copy, nonatomic) NSString *scopeName;
@property (copy, nonatomic) NSString *scopeDesc;
@property (copy, nonatomic) NSString *scopeTrackName;
@property (nonatomic) BOOL auth;

- (void).cxx_destruct;
- (void)buildInfo;

@end
