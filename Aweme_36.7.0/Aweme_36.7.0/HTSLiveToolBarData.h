@class ToolbarPermutation, HTSLiveToolbarExtraInfo, NSMutableArray, GPBInt32ObjectDictionary;

@interface HTSLiveToolBarData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *entranceListArray;
@property (readonly, nonatomic) unsigned long long entranceListArray_Count;
@property (retain, nonatomic) NSMutableArray *morePanelArray;
@property (readonly, nonatomic) unsigned long long morePanelArray_Count;
@property (nonatomic) int maxEntranceCnt;
@property (retain, nonatomic) NSMutableArray *landscapeUpRightArray;
@property (readonly, nonatomic) unsigned long long landscapeUpRightArray_Count;
@property (retain, nonatomic) GPBInt32ObjectDictionary *skinResource;
@property (readonly, nonatomic) unsigned long long skinResource_Count;
@property (nonatomic) int maxEntranceCntLandscape;
@property (retain, nonatomic) ToolbarPermutation *permutation;
@property (nonatomic) BOOL hasPermutation;
@property (retain, nonatomic) HTSLiveToolbarExtraInfo *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;

+ (id)descriptor;

- (id)entranceListArray;

@end
