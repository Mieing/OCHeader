@interface VOIPSettingUtil : NSObject

+ (int)getMicPortChange;
+ (id)getVoipSettingConfigRootDir;
+ (id)getVoipSettingConfinPath;
+ (id)getVoipSettingStaticCapPath;
+ (BOOL)saveParamsItem:(id)a0 filePath:(id)a1 paramFilter:(id)a2;
+ (BOOL)saveParams:(id)a0;
+ (BOOL)saveParamsStaticCab:(id)a0;
+ (id)getParamOfKeyItem:(id)a0 filePath:(id)a1 defaultVal:(id)a2;
+ (id)getParamOfKey:(id)a0 defaultVal:(id)a1;
+ (id)getParamOfKeyStaticCap:(id)a0 defaultVal:(id)a1;
+ (long long)FrontMicCheckAndSetConfig:(int)a0 enbleConfig:(int)a1 playVolume:(int)a2;
+ (BOOL)changeVoipMicToRemoteIO;

@end
