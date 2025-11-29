@class NSString;

@interface FavStreamVideoItem : FavoritesModel

@property (retain, nonatomic) NSString *streamVideoUrl;
@property (retain, nonatomic) NSString *streamVideoTitle;
@property (retain, nonatomic) NSString *streamVideoWording;
@property (retain, nonatomic) NSString *streamVideoWebUrl;
@property (nonatomic) unsigned int streamVideoTotalTime;
@property (retain, nonatomic) NSString *streamVideoThumbUrl;
@property (retain, nonatomic) NSString *streamVideoPublishId;
@property (retain, nonatomic) NSString *streamVideoAdUxInfo;

- (void).cxx_destruct;

@end
