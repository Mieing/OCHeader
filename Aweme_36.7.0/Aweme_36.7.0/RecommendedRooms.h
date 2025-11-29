@class GPBInt64EnumDictionary, NSMutableArray, GPBInt64Int64Dictionary;

@interface RecommendedRooms : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *roomsArray;
@property (readonly, nonatomic) unsigned long long roomsArray_Count;
@property (retain, nonatomic) GPBInt64Int64Dictionary *sources;
@property (readonly, nonatomic) unsigned long long sources_Count;
@property (retain, nonatomic) GPBInt64EnumDictionary *reason;
@property (readonly, nonatomic) unsigned long long reason_Count;

+ (id)descriptor;

@end
