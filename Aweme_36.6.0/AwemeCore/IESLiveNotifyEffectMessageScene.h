@class NSString, NSNumber, HTSLiveText;

@interface IESLiveNotifyEffectMessageScene : NSObject

@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *subSceneName;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) BOOL needAggregate;
@property (retain, nonatomic) NSNumber *aggregatedNum;
@property (retain, nonatomic) HTSLiveText *aggregatedText;

- (void).cxx_destruct;

@end
