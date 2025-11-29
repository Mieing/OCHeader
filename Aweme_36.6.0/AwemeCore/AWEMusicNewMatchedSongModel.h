@class NSString, AWENewURLModel;

@interface AWEMusicNewMatchedSongModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *songID;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *h5URL;
@property (retain, nonatomic) AWENewURLModel *coverMediumURL;
@property (copy, nonatomic) NSString *dspName;
@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *fullClipID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
