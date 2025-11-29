@class NSString, NSMutableDictionary;

@interface WCFinderMyTabEntranceWordingReadInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *readTimeMap;
@property (retain, nonatomic) NSMutableDictionary *profimeReadTimeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_readTimeMap;
+ (void)PBArrayAdd_profimeReadTimeMap;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
