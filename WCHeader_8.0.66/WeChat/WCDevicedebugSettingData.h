@class NSString, NSMutableDictionary;

@interface WCDevicedebugSettingData : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *setting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_setting;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
