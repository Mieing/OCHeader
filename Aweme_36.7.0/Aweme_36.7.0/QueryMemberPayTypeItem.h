@class NSString, NSArray;
@protocol CJPayDeductMethodDescItem;

@interface QueryMemberPayTypeItem : CJPayChannelModel

@property (copy, nonatomic) NSString *identity;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *payMode;
@property (copy, nonatomic) NSString *cardNoMask;
@property (copy, nonatomic) NSString *bankCardId;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *notSupportMsg;
@property (nonatomic) BOOL chosen;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *shareAssetId;
@property (copy, nonatomic) NSString *shareAssetCode;
@property (copy, nonatomic) NSArray<CJPayDeductMethodDescItem> *deductOrderDescItems;

+ (id)keyMapper;

- (id)buildShowConfig;
- (BOOL)payMethodIsEqual:(id)a0;
- (id)getPayMethodTitle;
- (unsigned long long)p_getChannelType;
- (id)p_getMethodIdentity;
- (void).cxx_destruct;

@end
