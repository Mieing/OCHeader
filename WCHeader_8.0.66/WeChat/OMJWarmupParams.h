@class NSString;

@interface OMJWarmupParams : NSObject

@property (readonly, copy, nonatomic) NSString *instaMovieDirectory;
@property (readonly, copy, nonatomic) NSString *camFunDirectory;
@property (readonly, nonatomic) BOOL overwriteExisting;

- (id)initWithInstaMovieDirectory:(id)a0;
- (id)initWithCamFunDirectory:(id)a0;
- (id)initWithInstaMovieDirectory:(id)a0 camFunDirectory:(id)a1 overwriteExisting:(BOOL)a2;
- (void).cxx_destruct;

@end
