@class GPBEnumArray, GPBInt64Array, NSMutableArray, GPBInt64ObjectDictionary;

@interface IESLiveLinkMicAudienceInteractListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *interactItemsArray;
@property (readonly, nonatomic) unsigned long long interactItemsArray_Count;
@property (retain, nonatomic) GPBInt64Array *playingListArray;
@property (readonly, nonatomic) unsigned long long playingListArray_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *exclusiveList;
@property (readonly, nonatomic) unsigned long long exclusiveList_Count;
@property (retain, nonatomic) NSMutableArray *roomModeItemListArray;
@property (readonly, nonatomic) unsigned long long roomModeItemListArray_Count;
@property (retain, nonatomic) GPBEnumArray *curInteractTypeArray;
@property (readonly, nonatomic) unsigned long long curInteractTypeArray_Count;

+ (id)descriptor;

@end
