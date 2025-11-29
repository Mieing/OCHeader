@class GPBInt64Array;

@interface ImpressionStructV2 : GPBMessage

@property (retain, nonatomic) GPBInt64Array *groupIdListAArray;
@property (readonly, nonatomic) unsigned long long groupIdListAArray_Count;
@property (retain, nonatomic) GPBInt64Array *groupIdListBArray;
@property (readonly, nonatomic) unsigned long long groupIdListBArray_Count;
@property (retain, nonatomic) GPBInt64Array *similarIdListAArray;
@property (readonly, nonatomic) unsigned long long similarIdListAArray_Count;
@property (retain, nonatomic) GPBInt64Array *similarIdListBArray;
@property (readonly, nonatomic) unsigned long long similarIdListBArray_Count;
@property (retain, nonatomic) GPBInt64Array *groupIdListCArray;
@property (readonly, nonatomic) unsigned long long groupIdListCArray_Count;
@property (retain, nonatomic) GPBInt64Array *groupIdListDArray;
@property (readonly, nonatomic) unsigned long long groupIdListDArray_Count;

+ (id)descriptor;

- (id)groupIdListDArray;
- (id)groupIdListCArray;
- (id)groupIdListAArray;

@end
