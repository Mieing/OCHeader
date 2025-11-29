@class NSArray, NSString;

@interface AWECodeGenSelectPickInfoModel : AWEBaseDataModel

@property (nonatomic) BOOL isPicked;
@property (nonatomic) BOOL disablePick;
@property (copy, nonatomic) NSArray *pickUserInfoListModelArray;
@property (nonatomic) BOOL isShowDanmaku;
@property (copy, nonatomic) NSString *danmakuSchema;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
