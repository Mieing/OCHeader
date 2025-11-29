@class NSString, NSMutableArray;

@interface WCFinderSceneChainArray : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *sceneMarkModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sceneMarkModelArray;
+ (void)initialize;

@end
