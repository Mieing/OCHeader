@interface CameraScanCombineReporter : NSObject

+ (void)reportClientActionType:(unsigned int)a0;
+ (void)reportClientActionType:(unsigned int)a0 withExtraInfo:(id)a1;
+ (void)reportStreamDetectAction:(unsigned int)a0 itemVM:(id)a1 itemIndex:(long long)a2 itemCount:(unsigned long long)a3 baseInfo:(id)a4;
+ (void)reportStreamDetectFailed:(unsigned int)a0 itemVM:(id)a1 itemIndex:(long long)a2 itemCount:(unsigned long long)a3 baseInfo:(id)a4;
+ (void)reportCardItemOpenWithItemVM:(id)a0 itemIndex:(long long)a1 itemCount:(unsigned long long)a2 preload:(BOOL)a3 baseInfo:(id)a4;
+ (void)reportAlbumDetectAction:(unsigned int)a0 itemVM:(id)a1 baseInfo:(id)a2;
+ (void)reportCombineAction:(unsigned int)a0 itemVM:(id)a1 itemIndex:(long long)a2 itemCount:(unsigned long long)a3 preload:(BOOL)a4 errCode:(unsigned int)a5 baseInfo:(id)a6;
+ (void)reportDetectPerfWithItemVM:(id)a0 modelVersion:(long long)a1;
+ (unsigned int)cardResultTypeFromCombineSvrResultType:(long long)a0;

@end
