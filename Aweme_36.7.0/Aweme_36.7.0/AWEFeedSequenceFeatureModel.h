@class NSNumber, NSString;

@interface AWEFeedSequenceFeatureModel : AWEFeedBaseSequenceFeatureModel

@property (retain, nonatomic) NSNumber *s_ts;
@property (retain, nonatomic) NSNumber *p_t_a;
@property (retain, nonatomic) NSNumber *v_t;
@property (nonatomic) unsigned long long user_act;
@property (copy, nonatomic) NSString *mid;
@property (copy, nonatomic) NSString *aid;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *biz;
@property (copy, nonatomic) NSString *score_info;
@property (nonatomic) unsigned long long tuji_act;
@property (copy, nonatomic) NSNumber *tuji_st;

- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
