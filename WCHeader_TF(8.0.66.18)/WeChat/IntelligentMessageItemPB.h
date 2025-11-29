@class NSArray, NSMutableArray, NSString;

@interface IntelligentMessageItemPB : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *hadUpdateModelKeyList;
@property (nonatomic) BOOL hadUpdateFaceCluster;
@property (retain, nonatomic) NSArray *shouldUpdateModelKeyList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_hadUpdateModelKeyList;
+ (void)PBArrayAdd_hadUpdateFaceCluster;
+ (void)PBArrayAdd_shouldUpdateModelKeyList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
