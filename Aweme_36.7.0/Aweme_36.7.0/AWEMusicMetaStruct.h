@class NSNumber, NSString, NSArray;

@interface AWEMusicMetaStruct : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *rawRank;
@property (copy, nonatomic) NSString *clipName;
@property (copy, nonatomic) NSString *clipAuthor;
@property (retain, nonatomic) NSNumber *musicId;
@property (retain, nonatomic) NSArray *clipCoverUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
