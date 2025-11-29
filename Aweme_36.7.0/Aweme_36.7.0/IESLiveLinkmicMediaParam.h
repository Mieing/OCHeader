@class IESLiveLinkmicStreamInfo, IESLiveLinkmicMediaInfoForEnterRoom, IESLivePersonalKaraokeMediaInfo, IESLiveLinkmicMediaInfo, IESLiveUpdateMediaInfoNotify, IESLiveKTVComponentMediaInfo;

@interface IESLiveLinkmicMediaParam : IESLivePBBaseMessage

@property (nonatomic) int linkmicMediaType;
@property (readonly, nonatomic) int mediaInfoOneOfCase;
@property (retain, nonatomic) IESLiveLinkmicMediaInfo *linkmicMediaInfo;
@property (retain, nonatomic) IESLiveKTVComponentMediaInfo *ktvComponentMediaInfo;
@property (retain, nonatomic) IESLiveUpdateMediaInfoNotify *updateMediaInfoNotify;
@property (retain, nonatomic) IESLivePersonalKaraokeMediaInfo *personalKaraokeInfo;
@property (retain, nonatomic) IESLiveLinkmicStreamInfo *linkmicStreamInfo;
@property (retain, nonatomic) IESLiveLinkmicMediaInfoForEnterRoom *mediaInfoForEnterRoom;

+ (id)descriptor;

@end
