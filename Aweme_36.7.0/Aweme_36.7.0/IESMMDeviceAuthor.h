@interface IESMMDeviceAuthor : NSObject

+ (void)allowMixAudioWithOthersDuringRecord:(BOOL)a0;
+ (BOOL)checkCategoryCanbePlay;
+ (BOOL)checkPlayBackAndRecordCategory;
+ (BOOL)checkPlayBackAndRecordCategoryWithCategoryOption:(unsigned long long)a0;
+ (BOOL)checkPlayBackCategory;
+ (BOOL)deactiveAudioSession;
+ (id)getPortTypeInString;
+ (BOOL)isMicNowAvailableV2;
+ (unsigned long long)reduceCategoryOption:(unsigned long long)a0;
+ (void)setCustomPlayBackAndRecordCategoryOption:(unsigned long long)a0;
+ (void)setCustomPlayBackCategoryOption:(unsigned long long)a0;

@end
