@class NSString;

@interface IESECNativePrefetchRes : NSObject

@property (nonatomic) BOOL isNewCreate;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *configTags;

- (void).cxx_destruct;

@end
