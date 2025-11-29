@class AWELiveVSEpisode, NSString, AWELiveShowTagView, AWELiveRoomModel;

@interface AWELiveShowTagViewModel : NSObject <AWELiveShowTagViewProtocol>

@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (retain, nonatomic) AWELiveRoomModel *room;
@property (retain, nonatomic) AWELiveShowTagView *tagView;
@property (nonatomic) long long singleType;
@property (nonatomic) long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllSubViews;
- (id)createWithRoom:(id)a0 sizeOfView:(long long)a1;
- (id)createWithEpisode:(id)a0 sizeOfView:(long long)a1;
- (id)createWithSingleType:(long long)a0 sizeOfView:(long long)a1;
- (void)updatePaidTagType:(long long)a0;
- (double)currentPaidTagWidth;
- (void)updateCountDownLabel:(double)a0;
- (void)chooseType;
- (void)singleTypeTransform;
- (void).cxx_destruct;

@end
