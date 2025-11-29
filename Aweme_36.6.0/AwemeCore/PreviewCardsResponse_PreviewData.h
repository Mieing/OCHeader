@class NSString, NSMutableArray;

@interface PreviewCardsResponse_PreviewData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *previewRoomsArray;
@property (readonly, nonatomic) unsigned long long previewRoomsArray_Count;
@property (nonatomic) int contentCategory;
@property (copy, nonatomic) NSString *title;

+ (id)descriptor;

@end
