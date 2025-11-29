@class NSString;

@interface WCPayOfflinePayGuideData : NSObject <PBCoding>

@property (retain, nonatomic) NSString *bind_serial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bind_serial;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
