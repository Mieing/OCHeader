@class NSString, AWELunaMusicAnchorSongInfo;

@interface AWELunaMusicAnchorInfoResponse : AWEBaseApiModel

@property (nonatomic) BOOL autoBindBasicCheck;
@property (retain, nonatomic) AWELunaMusicAnchorSongInfo *songInfo;
@property (copy, nonatomic) NSString *userLevel;

+ (id)songInfoJSONTransformer;
+ (id)autoBindJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
