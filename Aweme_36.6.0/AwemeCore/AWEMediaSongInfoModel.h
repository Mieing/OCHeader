@class NSString;

@interface AWEMediaSongInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *songId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
