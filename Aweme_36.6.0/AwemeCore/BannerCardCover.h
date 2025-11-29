@class NSMutableArray;

@interface BannerCardCover : GPBMessage

@property (nonatomic) int width;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) int height;
@property (nonatomic) BOOL hasHeight;
@property (retain, nonatomic) NSMutableArray *URLListArray;
@property (readonly, nonatomic) unsigned long long URLListArray_Count;

+ (id)descriptor;

@end
