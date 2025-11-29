@class GPBInt32Array, NSMutableArray, ToolbarPermutation_Rule;

@interface ToolbarPermutation : IESLivePBBaseMessage

@property (retain, nonatomic) ToolbarPermutation_Rule *vertical;
@property (nonatomic) BOOL hasVertical;
@property (retain, nonatomic) ToolbarPermutation_Rule *landscape;
@property (nonatomic) BOOL hasLandscape;
@property (retain, nonatomic) ToolbarPermutation_Rule *general;
@property (nonatomic) BOOL hasGeneral;
@property (retain, nonatomic) GPBInt32Array *onDemandComponentListArray;
@property (readonly, nonatomic) unsigned long long onDemandComponentListArray_Count;
@property (retain, nonatomic) NSMutableArray *blockComponentListArray;
@property (readonly, nonatomic) unsigned long long blockComponentListArray_Count;

+ (id)descriptor;

@end
