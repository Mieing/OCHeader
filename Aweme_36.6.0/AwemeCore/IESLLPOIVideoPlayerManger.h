@class NSMutableDictionary;

@interface IESLLPOIVideoPlayerManger : NSObject

@property (nonatomic) BOOL videoMute;
@property (retain, nonatomic) NSMutableDictionary *groupVideoPauseMap;
@property (retain, nonatomic) NSMutableDictionary *groupProgressMap;

+ (id)sharedManger;

- (void)syncVideoMute:(BOOL)a0;
- (BOOL)getVideoMuteStatus;
- (void)syncGroupDataWithGroup:(id)a0 key:(id)a1 data:(id)a2 map:(id)a3;
- (id)getGroupDataWithGroup:(id)a0 key:(id)a1 defaultData:(id)a2 map:(id)a3;
- (void)syncDefaultVideoPause:(id)a0 pause:(BOOL)a1;
- (BOOL)getDefaultVideoPause:(id)a0;
- (void)syncDefaultProgress:(id)a0 time:(double)a1;
- (double)getDefaultProgress:(id)a0;
- (void).cxx_destruct;

@end
