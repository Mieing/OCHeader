@class NSString, NSArray;

@interface AWELunaMusicianSongDetailModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *songTitle;
@property (copy, nonatomic) NSString *songDescription;
@property (retain, nonatomic) NSArray *artists;
@property (copy, nonatomic) NSString *tagType;
@property (nonatomic) BOOL isVip;

+ (id)JSONKeyPathsByPropertyKey;

- (id)music_songDetailInfo;
- (void).cxx_destruct;

@end
