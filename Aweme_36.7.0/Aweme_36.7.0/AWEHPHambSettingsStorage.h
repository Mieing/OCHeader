@class MMKV;

@interface AWEHPHambSettingsStorage : NSObject

@property (retain, nonatomic) MMKV *mmkv;

- (BOOL)writeSettings:(id)a0 error:(id *)a1;
- (BOOL)readSettings:(id *)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
