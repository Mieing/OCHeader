@class NSString;

@interface AWENegativeFeedbackInfoModel : NSObject <NSCopying, NSMutableCopying, NSCoding>

@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSString *negativeFeedbackInfoType;
@property (nonatomic) double actionTimeStamp;
@property (retain, nonatomic) id value;

- (id)initWithNegativeFeedbackActionType:(unsigned long long)a0 negativeFeedbackInfoType:(id)a1 value:(id)a2;
- (id)initWithNegativeFeedbackActionType:(unsigned long long)a0 negativeFeedbackInfoType:(id)a1 awemeModel:(id)a2;
- (id)initWithNegativeFeedbackActionType:(unsigned long long)a0 negativeFeedbackInfoType:(id)a1 musicModel:(id)a2;
- (id)initWithNegativeFeedbackActionType:(unsigned long long)a0 negativeFeedbackInfoType:(id)a1 userModel:(id)a2;
- (id)initWithNegativeFeedbackActionType:(unsigned long long)a0 negativeFeedbackInfoType:(id)a1 textExtraModel:(id)a2;
- (id)initWithNegativeFeedbackActionType:(unsigned long long)a0 negativeFeedbackInfoType:(id)a1 typesTagArray:(id)a2;
- (void)logNegativeInfoModelDescription;
- (BOOL)isEqualToFeedbackInfoModel:(id)a0;
- (void)updateNegativeFeedbackInfoTimeStamp;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
