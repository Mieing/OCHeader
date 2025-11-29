@class NSString, NSArray;
@protocol CJPayAuthDisplayContentModel;

@interface CJPayAuthDisplayMultiContentModel : JSONModel

@property (copy, nonatomic) NSString *oneDisplayDesc;
@property (copy, nonatomic) NSArray<CJPayAuthDisplayContentModel> *secondDisplayContents;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
