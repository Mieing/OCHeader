@class NSString, NSMutableArray;

@interface AwemeListenDiversionStructV2 : GPBMessage

@property (copy, nonatomic) NSString *sideDesc;
@property (nonatomic) BOOL hasSideDesc;
@property (nonatomic) int popupScene;
@property (nonatomic) BOOL hasPopupScene;
@property (copy, nonatomic) NSString *subTitleType;
@property (nonatomic) BOOL hasSubTitleType;
@property (nonatomic) long long categoryId;
@property (nonatomic) BOOL hasCategoryId;
@property (retain, nonatomic) NSMutableArray *extraArray;
@property (readonly, nonatomic) unsigned long long extraArray_Count;

+ (id)descriptor;

- (id)subTitleType;
- (int)popupScene;
- (id)sideDesc;

@end
