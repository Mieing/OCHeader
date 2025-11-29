@class NSString;

@interface BrandFansMsgSettingsViewModel : NSObject

@property (nonatomic) BOOL blockSpamMessage;
@property (nonatomic) BOOL fansMsgRedDotEnable;
@property (copy, nonatomic) NSString *bizuin;
@property (copy, nonatomic) id /* block */ onUpdated;

- (id)initWithBizuin:(id)a0;
- (void)dealloc;
- (void)restoreFromCache;
- (void)resetDefaultValue;
- (void)saveToCache;
- (void)updateFromServer;
- (void)updateBlockSpamMessage:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateFansMsgRedDotEnable:(BOOL)a0 completion:(id /* block */)a1;
- (void)cleanNotifyAndFansMsgRedDot;
- (id)updateSettingsWithItems:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
