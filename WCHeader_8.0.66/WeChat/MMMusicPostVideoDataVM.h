@class MMMusicLiveCGIMgr, NSString, MMMusicInfo, MMMusicMVModel, NSMutableArray;
@protocol MMMusicPostVideoDataVMDelegate;

@interface MMMusicPostVideoDataVM : NSObject <MMMusicLiveCGIMgrDelegate, MMMusicDataVM> {
    NSMutableArray *_arrData;
    MMMusicLiveCGIMgr *_cgiMgr;
    MMMusicMVModel *_mvModel;
}

@property (weak, nonatomic) id<MMMusicPostVideoDataVMDelegate> delegate;
@property (retain, nonatomic) MMMusicInfo *musicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMVModel:(id)a0;
- (void)loadNextPageData;
- (void)onServerGetDataArr:(id)a0 continueFlag:(BOOL)a1;
- (long long)numberOfItemsInSection;
- (id)dataOfIndex:(long long)a0;
- (unsigned long long)indexOfData:(id)a0;
- (id)getDataById:(id)a0;
- (void)notifyOnDataChanged:(BOOL)a0;
- (void)onMusicLiveGetMVRecommentList:(id)a0 continueFlag:(BOOL)a1 requestId:(id)a2;
- (id)dataArray;
- (void).cxx_destruct;

@end
