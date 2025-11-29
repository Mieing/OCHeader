@class NSString, OMJMusicInfo;

@interface WCVideoProducerMusicCellViewModel : NSObject <EditVideoBGMPlayerData, WCVideoProducerLoadMoreViewModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

@end
