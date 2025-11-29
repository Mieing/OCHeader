@class NSString, NSArray;
@protocol CJPayVoucherRetainMsgModel;

@interface CJPayVoucherRetainInfoModel : JSONModel

@property (nonatomic) BOOL noCloseIcon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *topRetainButtonText;
@property (copy, nonatomic) NSString *bottomRetainButtonText;
@property (nonatomic) long long countdown;
@property (copy, nonatomic) NSArray<CJPayVoucherRetainMsgModel> *retainMsgList;
@property (copy, nonatomic) NSString *retainType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
