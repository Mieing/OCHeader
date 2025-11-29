@class NSString, NSMutableArray;

@interface PushStreamInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *defaultResolutionKey;
@property (retain, nonatomic) NSMutableArray *resolutionsArray;
@property (readonly, nonatomic) unsigned long long resolutionsArray_Count;
@property (copy, nonatomic) NSString *recommendResolutionKey;

+ (id)descriptor;

@end
