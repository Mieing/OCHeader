@class NSString;

@interface IESECLivePlayBackServiceImpl : NSObject <IESECPlayBackContainerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getListViewWithContext:(id)a0 params:(id)a1;
+ (void)cardListView:(id)a0 onVideoProgressUpdate:(double)a1 duration:(double)a2;
+ (void)onSeekUpdateWithCardListView:(id)a0 currentTime:(double)a1;


@end
