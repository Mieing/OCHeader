@interface GameCenterStatUtils : MMObject

+ (void)report12909WithWithPosition:(unsigned int)a0 action:(unsigned int)a1 jsEventParams:(id)a2 url:(id)a3;
+ (void)report12909WithWithPosition:(unsigned int)a0 action:(unsigned int)a1 extInfo:(id)a2 fromScene:(id)a3 url:(id)a4;
+ (void)report12909WithWithPosition:(unsigned int)a0 action:(unsigned int)a1 extInfo:(id)a2;
+ (void)report12909AppStoreWithAction:(long long)a0 uiArea:(long long)a1 appId:(id)a2 appleId:(id)a3 sourceScene:(int)a4 msgId:(id)a5 noticeId:(id)a6 extInfo:(id)a7;
+ (void)reportFindEntryGameDotHalfExposureWithMsg:(id)a0;

@end
