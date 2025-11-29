@class NSString, NSArray;

@interface ACCPicTemplateModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSArray *iconURLs;
@property (retain, nonatomic) id rawModel;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *categoryId;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) BOOL isLocalParesedCategory;
@property (nonatomic) BOOL hasDownloadedIcon;
@property (nonatomic) BOOL isRecommendMore;
@property (readonly, nonatomic) BOOL isDownloaded;
@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, copy, nonatomic) NSString *provider;
@property (readonly, copy, nonatomic) NSArray *features;
@property (nonatomic) BOOL isHardInserted;

+ (id)buildTemplateWithRawModel:(id)a0 categoryId:(id)a1 categoryName:(id)a2;

- (BOOL)isAIGCTemplate;
- (unsigned long long)templateModelType;
- (BOOL)isAIMatting;
- (BOOL)isAllCloneSlotsPicTemplate;
- (BOOL)isCustomInfoTemplate;
- (BOOL)isMultiSlotsPicTemplate;
- (unsigned long long)templateSlotCount:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
