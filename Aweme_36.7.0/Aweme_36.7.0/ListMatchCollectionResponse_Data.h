@class NSMutableArray;

@interface ListMatchCollectionResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *collectionItemsArray;
@property (readonly, nonatomic) unsigned long long collectionItemsArray_Count;

+ (id)descriptor;

@end
