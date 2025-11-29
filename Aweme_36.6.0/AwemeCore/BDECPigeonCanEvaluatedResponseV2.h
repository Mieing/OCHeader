@class NSString, NSDictionary;

@interface BDECPigeonCanEvaluatedResponseV2 : NSObject

@property (nonatomic) BOOL canEvaluated;
@property (copy, nonatomic) NSString *canNotEvaluatedReason;
@property (copy, nonatomic) NSString *pigeonCid;
@property (copy, nonatomic) NSString *talkId;
@property (copy, nonatomic) NSDictionary *csTags;
@property (copy, nonatomic) NSDictionary *robotTags;

- (void).cxx_destruct;

@end
