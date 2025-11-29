@class AWEMusicCardUrlModel, NSString;

@interface AWEMusicCardShareInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEMusicCardUrlModel *shareCover;
@property (retain, nonatomic) NSString *shareLink;
@property (retain, nonatomic) NSString *commonDesc;
@property (retain, nonatomic) NSString *openAnchorShareId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
