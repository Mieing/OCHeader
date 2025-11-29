@interface CSJLandingPageConfModel : NSObject

@property (nonatomic) long long swipeBackType;
@property (nonatomic) long long filter_track;

- (BOOL)needIgnoreTrack;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
