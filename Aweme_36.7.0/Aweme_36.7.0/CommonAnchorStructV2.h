@class CommonAnchorBasicInfoStructV2, NSMutableArray;

@interface CommonAnchorStructV2 : GPBMessage

@property (retain, nonatomic) CommonAnchorBasicInfoStructV2 *basicInfo;
@property (nonatomic) BOOL hasBasicInfo;
@property (retain, nonatomic) NSMutableArray *anchorSceneInfoListArray;
@property (readonly, nonatomic) unsigned long long anchorSceneInfoListArray_Count;
@property (nonatomic) BOOL onlyUseCommonAnchorStruct;
@property (nonatomic) BOOL hasOnlyUseCommonAnchorStruct;

+ (id)descriptor;

- (id)anchorSceneInfoListArray;
- (id)basicInfo;

@end
