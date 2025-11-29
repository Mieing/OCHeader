@class NSString, NSArray, BDByteCastPPSubtitleBean, BDByteCastPPSkipInfoBean;

@interface BDByteCastPPMediaAssetBean : NSObject

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *creator;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *albumArtUrl;
@property (copy, nonatomic) NSString *danmakuUrl;
@property (copy, nonatomic) NSString *lyrics;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL isLike;
@property (nonatomic) long long diggCount;
@property (nonatomic) long long commentCount;
@property (copy, nonatomic) NSString *codec;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long startPosition;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *publisher;
@property (copy, nonatomic) NSString *customDlnaXmlElement;
@property (nonatomic) long long oversea;
@property (copy, nonatomic) NSString *sceneId;
@property (copy, nonatomic) NSArray *audioTrackList;
@property (nonatomic) long long audioTrack;
@property (copy, nonatomic) NSString *agentType;
@property (copy, nonatomic) NSString *cencKey;
@property (retain, nonatomic) BDByteCastPPSubtitleBean *subtitle;
@property (retain, nonatomic) BDByteCastPPSkipInfoBean *skipInfo;
@property (retain, nonatomic) id ads;

- (void).cxx_destruct;

@end
