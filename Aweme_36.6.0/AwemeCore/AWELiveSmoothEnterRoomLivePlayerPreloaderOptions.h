@class NSString, NSDictionary, AWEAwemeModel, NSNumber, IESLivePlayerBizStainedTrackInfo;

@interface AWELiveSmoothEnterRoomLivePlayerPreloaderOptions : NSObject

@property (retain, nonatomic) NSDictionary *settingInfo;
@property (retain, nonatomic) NSString *streamData;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) IESLivePlayerBizStainedTrackInfo *playerStainedTrackInfo;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;

- (void).cxx_destruct;

@end
