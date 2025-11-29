@class NSString, NSMutableArray, HTSLiveImage;

@interface ListCategoryResponse_CategoryNode : IESLivePBBaseMessage

@property (nonatomic) BOOL isSelecting;
@property (nonatomic) BOOL disable;
@property (nonatomic) BOOL isNew;
@property (nonatomic) BOOL isFromEnd;
@property (nonatomic) long long parentCategoryId;
@property (nonatomic) long long categoryId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int level;
@property (retain, nonatomic) NSMutableArray *subCategorysArray;
@property (readonly, nonatomic) unsigned long long subCategorysArray_Count;
@property (nonatomic) long long challengeId;
@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *challengeIdStr;
@property (nonatomic) BOOL canChoose;
@property (copy, nonatomic) NSString *unchooseMsg;
@property (copy, nonatomic) NSString *categoryAppIos;
@property (retain, nonatomic) NSMutableArray *categoryAppAndroidArray;
@property (readonly, nonatomic) unsigned long long categoryAppAndroidArray_Count;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *showType;
@property (nonatomic) BOOL isOtherCategory;

+ (id)descriptor;

@end
