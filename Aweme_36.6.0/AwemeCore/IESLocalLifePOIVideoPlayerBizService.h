@class NSString;

@interface IESLocalLifePOIVideoPlayerBizService : HTSService <IESLocalLifePOIVideoPlayerBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)syncVideoMute:(BOOL)a0;
- (BOOL)getVideoMuteStatus;
- (void)syncDefaultVideoPause:(id)a0 pause:(BOOL)a1;
- (BOOL)getDefaultVideoPause:(id)a0;
- (void)syncDefaultProgress:(id)a0 time:(double)a1;
- (double)getDefaultProgress:(id)a0;

@end
