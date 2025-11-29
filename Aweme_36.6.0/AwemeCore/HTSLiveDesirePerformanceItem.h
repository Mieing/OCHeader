@class NSString, HTSLiveImage;

@interface HTSLiveDesirePerformanceItem : IESLivePBBaseMessage

@property (nonatomic) long long itemId;
@property (retain, nonatomic) HTSLiveImage *itemCover;
@property (nonatomic) BOOL hasItemCover;
@property (copy, nonatomic) NSString *itemIdStr;

+ (id)descriptor;

@end
