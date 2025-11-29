@class NSString, GPBInt32Array;

@interface ChapterDataV2 : GPBMessage

@property (copy, nonatomic) NSString *recommendType;
@property (nonatomic) BOOL hasRecommendType;
@property (nonatomic) BOOL disableEdit;
@property (nonatomic) BOOL hasDisableEdit;
@property (retain, nonatomic) GPBInt32Array *adChapterIndexListArray;
@property (readonly, nonatomic) unsigned long long adChapterIndexListArray_Count;

+ (id)descriptor;

@end
