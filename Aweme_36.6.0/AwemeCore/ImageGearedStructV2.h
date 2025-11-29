@class NSString, NSMutableArray;

@interface ImageGearedStructV2 : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (retain, nonatomic) NSMutableArray *imagesArray;
@property (readonly, nonatomic) unsigned long long imagesArray_Count;

+ (id)descriptor;

- (id)imagesArray;
- (id)name;

@end
