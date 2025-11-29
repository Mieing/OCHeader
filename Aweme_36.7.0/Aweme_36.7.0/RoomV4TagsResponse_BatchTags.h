@class NSMutableArray;

@interface RoomV4TagsResponse_BatchTags : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;

+ (id)descriptor;

@end
