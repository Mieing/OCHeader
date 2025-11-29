@class NSString, NSMutableArray;

@interface WCFinderPostActionSheetConfigArray : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *configModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_configModelArray;
+ (void)initialize;

@end
