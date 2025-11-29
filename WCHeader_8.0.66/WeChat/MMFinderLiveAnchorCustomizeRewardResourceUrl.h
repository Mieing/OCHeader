@class NSString;

@interface MMFinderLiveAnchorCustomizeRewardResourceUrl : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *md5Hash;

+ (BOOL)isResourceUrlEmpty:(id)a0;

- (id)initWithPBResourceUrl:(id)a0;
- (id)initWithUrl:(id)a0 md5:(id)a1;
- (void).cxx_destruct;

@end
