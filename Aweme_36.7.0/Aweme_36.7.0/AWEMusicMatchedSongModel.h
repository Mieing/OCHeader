@class NSString, AWEURLModel;

@interface AWEMusicMatchedSongModel : AWEBaseApiModel <AWEMusicMatchedSongModelProtocol>

@property (copy, nonatomic) NSString *h5URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *songID;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *h5URL;
@property (copy, nonatomic) AWEURLModel *coverMediumURL;
@property (copy, nonatomic) NSString *dspName;
@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *fullClipID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)copyrightFlag;
- (void).cxx_destruct;

@end
