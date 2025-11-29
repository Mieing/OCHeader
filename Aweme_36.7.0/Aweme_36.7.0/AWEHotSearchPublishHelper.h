@class NSString, NSMutableDictionary;
@protocol AWEHotSpotPublishHelperDelegate;

@interface AWEHotSearchPublishHelper : NSObject <AWEPublishTaskMessage, AWEHotSpotPublishHelperProtocol>

@property (retain, nonatomic) NSMutableDictionary *publishTaskMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHotSpotPublishHelperDelegate> delegate;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (id)collectCoreTrackParams:(id)a0 initScene:(long long)a1;
- (id)removeHashtags:(id)a0;
- (void)removePublishTask:(id)a0;
- (void)markAllPublishTaskExpired;
- (void)startAlbumPageWithConfigParamsModel:(id)a0;
- (void)startTextInputPageWithConfigParamsModel:(id)a0;
- (void)startShotPageWithConfigParamsModel:(id)a0;
- (void)startTextEditPageWithConfigParamsModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
