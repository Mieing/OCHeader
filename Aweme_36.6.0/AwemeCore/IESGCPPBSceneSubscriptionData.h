@class NSString, NSMutableArray;

@interface IESGCPPBSceneSubscriptionData : GPBMessage

@property (copy, nonatomic) NSString *hintFeedCardImageURL;
@property (copy, nonatomic) NSString *hintDemoImageURL;
@property (retain, nonatomic) NSMutableArray *sceneSubscriptionListArray;
@property (readonly, nonatomic) unsigned long long sceneSubscriptionListArray_Count;

+ (id)descriptor;

@end
