@interface IESEffectEventTrackHelper : NSObject

+ (void)trackEffectDownloadEventWithEffectRecord:(id)a0 effectName:(id)a1 effectDownloadDuration:(unsigned long long)a2 totalDownloadDuration:(unsigned long long)a3 downloadError:(id)a4 algorithmDownloadInfo:(id)a5 extraInfoDict:(id)a6;
+ (void)trackCommonEventWithEventName:(id)a0 extraParameters:(id)a1;

@end
