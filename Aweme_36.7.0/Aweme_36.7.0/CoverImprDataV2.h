@class GPBInt64Array;

@interface CoverImprDataV2 : GPBMessage

@property (retain, nonatomic) GPBInt64Array *coverGroupIdListAArray;
@property (readonly, nonatomic) unsigned long long coverGroupIdListAArray_Count;
@property (retain, nonatomic) GPBInt64Array *coverGroupIdListBArray;
@property (readonly, nonatomic) unsigned long long coverGroupIdListBArray_Count;

+ (id)descriptor;

- (id)coverGroupIdListBArray;
- (id)coverGroupIdListAArray;

@end
