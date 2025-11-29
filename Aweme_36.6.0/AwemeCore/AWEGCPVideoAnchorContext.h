@class NSString, NSDictionary;

@interface AWEGCPVideoAnchorContext : NSObject

@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *sourceBTMToken;

- (void).cxx_destruct;

@end
