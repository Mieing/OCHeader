@class NSString, NSArray;

@interface XPlaySocketURLConfig : NSObject

@property (nonatomic) int appId;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *urls;

- (void).cxx_destruct;

@end
