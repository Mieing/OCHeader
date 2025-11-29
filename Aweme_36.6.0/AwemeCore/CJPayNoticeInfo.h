@class NSString;

@interface CJPayNoticeInfo : JSONModel

@property (copy, nonatomic) NSString *noticeType;
@property (copy, nonatomic) NSString *notice;
@property (copy, nonatomic) NSString *withdrawBtnStatus;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
