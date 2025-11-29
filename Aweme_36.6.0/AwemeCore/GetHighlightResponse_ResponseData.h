@class NSMutableArray;

@interface GetHighlightResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *highlightUrlsArray;
@property (readonly, nonatomic) unsigned long long highlightUrlsArray_Count;

+ (id)descriptor;

@end
