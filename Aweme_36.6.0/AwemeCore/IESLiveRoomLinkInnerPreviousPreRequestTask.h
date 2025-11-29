@class IESLiveRoomLinkInnerPreLoadParam;

@interface IESLiveRoomLinkInnerPreviousPreRequestTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkInnerPreLoadParam *innerPreParam;

- (void)cancelPreload;
- (void)updateContextParam:(id)a0;
- (void)preloadWithPreviousRoomComponentMountFinished;
- (void).cxx_destruct;
- (void)clear;
- (void)run;

@end
