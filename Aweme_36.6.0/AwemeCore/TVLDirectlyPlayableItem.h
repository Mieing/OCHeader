@class NSArray, TVLPlayerItemPreferences;

@interface TVLDirectlyPlayableItem : TVLPlayerItemInternal {
    NSArray *_playableURLs;
    NSArray *_supportedPreferences;
    BOOL _fallbackSetResolution;
    TVLPlayerItemPreferences *_preferences;
}

- (id)URLWithPreferences:(id)a0;
- (id)supportedPreferences;
- (id)initWithPlayableURLs:(id)a0;
- (void)fallbackPreferences:(id)a0;
- (BOOL)fallbackWithoutSetResolution;
- (id)preferences;
- (void)setPreferences:(id)a0;
- (id)URI;
- (void).cxx_destruct;
- (id)currentURL;

@end
