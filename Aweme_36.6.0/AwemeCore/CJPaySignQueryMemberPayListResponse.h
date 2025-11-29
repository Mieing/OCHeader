@class NSString, NSArray, QueryMemberPayTypeItem;
@protocol QueryMemberPayTypeItem;

@interface CJPaySignQueryMemberPayListResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *payType;
@property (copy, nonatomic) NSArray<QueryMemberPayTypeItem> *payTypeList;
@property (retain, nonatomic) QueryMemberPayTypeItem *firstPayTypeItem;
@property (copy, nonatomic) NSString *displayName;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)memberPayListShowConfigs;
- (void).cxx_destruct;

@end
