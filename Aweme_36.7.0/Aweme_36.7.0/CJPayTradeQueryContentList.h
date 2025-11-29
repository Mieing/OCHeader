@class NSString;

@interface CJPayTradeQueryContentList : JSONModel

@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *subContent;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
