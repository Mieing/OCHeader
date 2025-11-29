@class NSString, UrlStructV2;

@interface UnifiedMusicGroupStructV2 : GPBMessage

@property (nonatomic) long long songId;
@property (nonatomic) BOOL hasSongId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *author;
@property (nonatomic) BOOL hasAuthor;
@property (retain, nonatomic) UrlStructV2 *mediumCoverURL;
@property (nonatomic) BOOL hasMediumCoverURL;
@property (nonatomic) long long ugId;
@property (nonatomic) BOOL hasUgId;
@property (nonatomic) long long useCount;
@property (nonatomic) BOOL hasUseCount;
@property (nonatomic) long long musicId;
@property (nonatomic) BOOL hasMusicId;
@property (nonatomic) long long majorUgId;
@property (nonatomic) BOOL hasMajorUgId;
@property (nonatomic) long long minorUgId;
@property (nonatomic) BOOL hasMinorUgId;

+ (id)descriptor;

- (long long)minorUgId;
- (long long)majorUgId;
- (long long)ugId;
- (id)mediumCoverURL;
- (id)author;
- (id)title;
- (long long)songId;

@end
