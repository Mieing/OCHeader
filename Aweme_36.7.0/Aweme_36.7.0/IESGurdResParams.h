@class NSString;

@interface IESGurdResParams : NSObject

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (nonatomic) BOOL skipCdn;
@property (nonatomic) BOOL waitUpdate;
@property (nonatomic) BOOL ignoreAccess;

- (BOOL)isParamsValid;
- (void).cxx_destruct;

@end
