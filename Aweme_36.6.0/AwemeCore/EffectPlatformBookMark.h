@class NSMutableDictionary;

@interface EffectPlatformBookMark : NSObject

@property (retain, nonatomic) NSMutableDictionary *bookmarkDic;

+ (void)markReadForPanelName:(id)a0 timeStamp:(id)a1;
+ (void)markReadForPanel:(id)a0;
+ (void)markReadForEffect:(id)a0;
+ (BOOL)isReadForPanelName:(id)a0 timeStamp:(id)a1;
+ (BOOL)isReadForPanel:(id)a0;
+ (BOOL)isReadForEffect:(id)a0;
+ (BOOL)isReadForCategory:(id)a0;
+ (void)markReadForCategory:(id)a0;
+ (id)sharedInstance;

- (void)_loadBookMark;
- (void)_save;
- (void).cxx_destruct;
- (id)init;

@end
