@class NSMutableArray;

@interface SingleExpressionDetectResult : NSObject

@property long long ID;
@property float age;
@property float boy_prob;
@property long long gender;
@property float attractive;
@property float happy_score;
@property long long exp_type;
@property (retain) NSMutableArray *exp_probs;
@property float real_face_prob;
@property float quality;

- (void).cxx_destruct;
- (id)init;

@end
