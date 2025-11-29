@class NSString, GPBEnumArray;

@interface PersonalKaraokeBannerListResponse_ActivityContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *iconType;
@property (retain, nonatomic) GPBEnumArray *pagesArray;
@property (readonly, nonatomic) unsigned long long pagesArray_Count;

+ (id)descriptor;

@end
