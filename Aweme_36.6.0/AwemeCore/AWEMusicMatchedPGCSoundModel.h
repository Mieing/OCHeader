@class NSString, AWENewURLModel;

@interface AWEMusicMatchedPGCSoundModel : AWEBaseDataModel

@property (nonatomic) long long clipId;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *mixedTitle;
@property (copy, nonatomic) NSString *mixedAuthor;
@property (retain, nonatomic) AWENewURLModel *coverMediumModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
