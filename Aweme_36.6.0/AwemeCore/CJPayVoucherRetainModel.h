@class NSString, NSArray;
@protocol CJPayRetainMsgV2;

@interface CJPayVoucherRetainModel : JSONModel

@property (copy, nonatomic) NSString *titleLogoURL;
@property (copy, nonatomic) NSString *topRetainButtonText;
@property (copy, nonatomic) NSString *bottomRetainButtonText;
@property (copy, nonatomic) NSString *noCloseIcon;
@property (copy, nonatomic) NSString *retainType;
@property (copy, nonatomic) NSArray<CJPayRetainMsgV2> *retainMsgList;
@property (copy, nonatomic) NSArray *retainMsgListTrack;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
