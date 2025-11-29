@class NSString, NSMutableDictionary, AWEAwemeModel, NSNumber;

@interface AWEFeedSequenceFeatureItemModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *s_ts;
@property (retain, nonatomic) NSNumber *p_t_a;
@property (retain, nonatomic) NSNumber *v_t;
@property (nonatomic) unsigned long long user_act;
@property (copy, nonatomic) NSString *score_info;
@property (copy, nonatomic) NSString *music_id;
@property (copy, nonatomic) NSString *author_id;
@property (retain, nonatomic) NSMutableDictionary *custom;
@property (nonatomic) long long type;
@property (nonatomic) BOOL is_dup;

- (void).cxx_destruct;
- (id)init;
- (id)toDict;

@end
