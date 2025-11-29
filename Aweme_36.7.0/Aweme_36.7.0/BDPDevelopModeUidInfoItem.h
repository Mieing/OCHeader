@class NSDictionary;

@interface BDPDevelopModeUidInfoItem : NSObject <NSCoding>

@property (retain, nonatomic) NSDictionary *bindTimorDict;
@property (nonatomic) BOOL devModeSwitchOn;
@property (nonatomic) BOOL canShowDevMode;
@property (retain, nonatomic) NSDictionary *easterEggDict;

- (id)transferToUidItemWithDict:(id)a0;
- (id)transferToDictWithUidItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
