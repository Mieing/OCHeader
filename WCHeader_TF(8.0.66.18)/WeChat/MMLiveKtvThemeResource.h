@class NSString;

@interface MMLiveKtvThemeResource : NSObject

@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSString *md5Hash;

- (void)fetchResourcesWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
