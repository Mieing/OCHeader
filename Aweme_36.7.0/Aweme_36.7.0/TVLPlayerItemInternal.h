@class TVLPlayerItemPreferences, NSArray, NSString, NSURL;

@interface TVLPlayerItemInternal : NSObject

@property (retain, nonatomic) TVLPlayerItemPreferences *preferences;
@property (readonly, copy, nonatomic) NSArray *supportedPreferences;
@property (readonly, nonatomic) NSURL *currentURL;
@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) BOOL fallbackWithoutSetResolution;

- (id)URLWithPreferences:(id)a0;
- (void)requestItemInfoWithCompletion:(id /* block */)a0;
- (void)fallbackPreferences:(id)a0;
- (id)init;
- (void)cancel;

@end
