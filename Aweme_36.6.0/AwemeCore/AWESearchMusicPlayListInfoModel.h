@class NSString, NSArray;

@interface AWESearchMusicPlayListInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long musicCount;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSArray *urlList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
