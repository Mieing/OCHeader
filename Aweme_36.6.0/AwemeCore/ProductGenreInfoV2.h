@class SpecialInfoV2, GPBEnumArray;

@interface ProductGenreInfoV2 : GPBMessage

@property (nonatomic) int productGenreType;
@property (nonatomic) BOOL hasProductGenreType;
@property (retain, nonatomic) GPBEnumArray *materialGenreSubTypeSetArray;
@property (readonly, nonatomic) unsigned long long materialGenreSubTypeSetArray_Count;
@property (retain, nonatomic) SpecialInfoV2 *specialInfo;
@property (nonatomic) BOOL hasSpecialInfo;

+ (id)descriptor;

- (id)specialInfo;
- (id)materialGenreSubTypeSetArray;
- (int)productGenreType;

@end
