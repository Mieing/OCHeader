@class NSString, AWENewURLModel;

@interface AWEMusicDiversionModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *lunaSongID;
@property (retain, nonatomic) AWENewURLModel *coverURL;
@property (nonatomic) int hitStrategy;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
