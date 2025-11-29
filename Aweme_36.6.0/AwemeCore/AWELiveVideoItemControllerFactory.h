@class NSString;

@interface AWELiveVideoItemControllerFactory : NSObject <IESLiveVideoDetailService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)videoItemControllerWithID:(id)a0;
- (void)pushVideoDetailControllerWithItemJSONString:(id)a0 extra:(id)a1;
- (void)pushVideoDetailListWithItems:(id)a0 programID:(id)a1 enterFrom:(id)a2;

@end
