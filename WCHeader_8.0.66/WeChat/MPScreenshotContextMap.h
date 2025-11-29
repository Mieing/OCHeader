@class NSString, NSMutableDictionary;

@interface MPScreenshotContextMap : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *infoMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_infoMap;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
