@class NSString, NSMutableDictionary;

@interface WAScreenshotContextInfoDicWrap : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *infoDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_infoDic;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
