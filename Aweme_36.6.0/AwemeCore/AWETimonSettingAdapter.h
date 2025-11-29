@class NSString, NSMutableArray;

@interface AWETimonSettingAdapter : NSObject <AWEAppAwemeSettingMessage, PNSSettingProtocol>

@property (retain, nonatomic) NSMutableArray *blocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awemeSettingDidChange;
- (id)boolArrayForKey:(id)a0;
- (id)floatArrayForKey:(id)a0;
- (id)intArrayForKey:(id)a0;
- (id)dictionaryArrayForKey:(id)a0;
- (id)arrayArrayForKey:(id)a0;
- (id)modelForKey:(id)a0;
- (void)registerSettingUpdateHandler:(id /* block */)a0;
- (double)floatForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)dealloc;
- (id)stringArrayForKey:(id)a0;
- (long long)intForKey:(id)a0;

@end
