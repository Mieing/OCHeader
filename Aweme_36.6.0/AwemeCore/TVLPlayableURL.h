@class TVLPlayerItem, NSString, TVLPlayerItemPreferences, NSURL, NSURLComponents, NSDictionary;

@interface TVLPlayableURL : NSObject {
    NSString *_mpdDefaultResolution;
}

@property (retain, nonatomic) NSURLComponents *URLComponents;
@property (weak, nonatomic) TVLPlayerItem *playerItem;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *playableString;
@property (readonly, nonatomic) TVLPlayerItemPreferences *preferences;
@property (readonly, nonatomic) NSDictionary *LLASHRepresentation;
@property (readonly, nonatomic) BOOL supportsTimeShift;
@property (readonly, copy, nonatomic) NSString *mpdDefaultResolution;

- (id)updateDefaultResolutionOfLLASHMPD:(id)a0 targetResolution:(id)a1;
- (id)timeShiftFormat;
- (id)generateURLWithAdaptiveGopCache:(id)a0 abrPts:(long long)a1;
- (id)generateURLWithCurrentStrategy:(id)a0;
- (id)mediaProtocolToStr;
- (id)parsePlayableString:(id)a0;
- (void)updateMPDToTargetResolution:(id)a0;
- (id)initWithURL:(id)a0 preferences:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)a0;

@end
