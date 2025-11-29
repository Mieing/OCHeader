@class NSString, NSMutableArray;

@interface TopDynamicTab : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *activityName;
@property (retain, nonatomic) NSMutableArray *displayTabImagesArray;
@property (readonly, nonatomic) unsigned long long displayTabImagesArray_Count;

+ (id)descriptor;

@end
