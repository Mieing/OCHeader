@class NSMutableArray, HTSLiveImagesTag;

@interface HTSLiveImagesItem : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *imagesArray;
@property (readonly, nonatomic) unsigned long long imagesArray_Count;
@property (retain, nonatomic) HTSLiveImagesTag *tag;
@property (nonatomic) BOOL hasTag;
@property (nonatomic) int displayStyle;

+ (id)descriptor;

@end
