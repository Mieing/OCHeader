@class IESSoloKTVDraftVideoModel, NSString, IESSoloKTVDraftSongModel, IESSoloKTVDraftUserRecordModel;

@interface IESSoloKTVDraftMainModel : NSObject

@property (retain, nonatomic) NSString *draftID;
@property (retain, nonatomic) IESSoloKTVDraftSongModel *song;
@property (retain, nonatomic) IESSoloKTVDraftVideoModel *video;
@property (retain, nonatomic) IESSoloKTVDraftUserRecordModel *userRecord;
@property (retain, nonatomic) NSString *version;

- (void)clearUserRecord;
- (id)getBGMPath;
- (void).cxx_destruct;
- (id)init;

@end
