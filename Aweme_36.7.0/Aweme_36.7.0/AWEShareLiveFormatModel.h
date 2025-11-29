@class AWELiveEpisodeModel;
@protocol AWEShareLiveRoomModelProtocol, AWEShareLiveContentModelProtocol;

@interface AWEShareLiveFormatModel : NSObject

@property (retain, nonatomic) id<AWEShareLiveRoomModelProtocol> room;
@property (retain, nonatomic) id<AWEShareLiveContentModelProtocol> content;
@property (retain, nonatomic) AWELiveEpisodeModel *mappedEpisode;
@property (nonatomic) BOOL isLandscape;

- (void).cxx_destruct;

@end
