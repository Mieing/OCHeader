@interface WPUtility : NSObject

+ (unsigned int)genCurrentTime;
+ (unsigned long long)genCurrentTimeInMs;
+ (unsigned long long)genCurrentTimeInMsFrom1970;
+ (BOOL)isiOS13plus;
+ (id)getWritingLogDirPath;
+ (id)getLogDirPath;
+ (id)getLibraryCachePath;
+ (id)stringWithPlayerDecoderType:(long long)a0;
+ (long long)getDecodeeTypeWith:(long long)a0;

@end
