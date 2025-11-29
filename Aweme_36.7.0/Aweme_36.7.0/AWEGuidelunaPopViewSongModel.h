@class NSString, NSArray;

@interface AWEGuidelunaPopViewSongModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *lunaSongId;
@property (copy, nonatomic) NSArray *songCoverUrlArray;
@property (copy, nonatomic) NSString *songTitle;
@property (copy, nonatomic) NSArray *songAuthors;
@property (copy, nonatomic) NSString *albumTitle;
@property (nonatomic) unsigned long long songStrategy;
@property (copy, nonatomic) NSString *descriptionContent;

+ (id)JSONKeyPathsByPropertyKey;

- (id)similarSongType;
- (void).cxx_destruct;

@end
