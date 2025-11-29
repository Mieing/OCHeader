@class IESLiveKtvSongStruct_RecommendRealTimeChorusInfo, NSString, HTSEventContext;

@interface IESLiveRecommendChorusInfoViewModel : NSObject

@property (retain, nonatomic) IESLiveKtvSongStruct_RecommendRealTimeChorusInfo *recommendChorusInfo;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) BOOL isSoloKTV;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)trackInfoViewWillShow;
- (void).cxx_destruct;
- (id)init;

@end
