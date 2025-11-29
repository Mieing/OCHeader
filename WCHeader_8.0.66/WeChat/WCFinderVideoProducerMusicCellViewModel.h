@class NSString, OMJMusicInfo;

@interface WCFinderVideoProducerMusicCellViewModel : NSObject <WCFinderVideoProducerLoadMoreViewModelProtocol, EditVideoBGMPlayerData>

@property (retain, nonatomic) OMJMusicInfo *oMJMusicInfo;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long cellOrder;
@property (copy, nonatomic) NSString *musicUrlPath;
@property (nonatomic) long long musicClipStartTimeMS;
@property (nonatomic) BOOL shouldShowLyrics;
@property (nonatomic) BOOL isLoadMoreCell;
@property (nonatomic) unsigned long long initialStateForLoadMoreCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOMJMusicInfo:(id)a0;
- (void)bindByCellView:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)musicUrl;
- (unsigned long long)musicType;
- (void).cxx_destruct;

@end
