@class TVLPlayerItemPreferences, NSError;

@interface TVLFallbackInfo : NSObject

@property (retain, nonatomic) TVLPlayerItemPreferences *originalPreferences;
@property (retain, nonatomic) TVLPlayerItemPreferences *fallbackPreferences;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL shouldIgnoreSuggestedFormatType;
@property (readonly, nonatomic) BOOL shouldIgnoreSuggestedProtocolType;

+ (id)fallbackInfoWithError:(id)a0 originalPreferences:(id)a1 fallbackPreferences:(id)a2;

- (id)initWithError:(id)a0 originalPreferences:(id)a1 fallbackPreferences:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
