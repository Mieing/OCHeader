@class NSString, NSArray;

@interface AWEIMCodeGenStreakInfoModel : AWEBaseDataModel

@property (nonatomic) long long days;
@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (copy, nonatomic) NSString *level;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long state;
@property (nonatomic) long long recoverDays;
@property (nonatomic) long long recoverNeedDays;
@property (copy, nonatomic) NSArray *textStylesArray;
@property (copy, nonatomic) NSString *simplifyText;
@property (nonatomic) long long recoverDdl;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEqualInUIComparedWithOtherModel:(id)a0;
- (id)initWithDays:(long long)a0 start:(long long)a1 end:(long long)a2 level:(id)a3 text:(id)a4 state:(long long)a5 recoverDays:(long long)a6 recoverNeedDays:(long long)a7;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
