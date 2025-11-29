@class NSString;

@interface IESECCategoryRefreshMessage_CategoryInfo : GPBMessage

@property (copy, nonatomic) NSString *uniqueIndex;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long categoryId;
@property (nonatomic) long long categoryType;
@property (nonatomic) BOOL needReload;
@property (nonatomic) BOOL disableAppend;

+ (id)descriptor;

@end
