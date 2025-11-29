@class NSString, NSArray;
@protocol CJPayDeductMethodDescItem;

@interface CJPaySignAssetShowInfoModel : JSONModel

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notSupportMsg;
@property (copy, nonatomic) NSArray<CJPayDeductMethodDescItem> *deductOrderDescItems;
@property (nonatomic) BOOL chosen;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
