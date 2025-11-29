@class NSString, NSMutableArray;

@interface GoldBoxConf : IESLivePBBaseMessage

@property (nonatomic) long long boxRound;
@property (nonatomic) long long boxSize;
@property (nonatomic) long long boxType;
@property (retain, nonatomic) NSMutableArray *btnTextArray;
@property (readonly, nonatomic) unsigned long long btnTextArray_Count;
@property (nonatomic) long long countDown;
@property (retain, nonatomic) NSMutableArray *descTextArray;
@property (readonly, nonatomic) unsigned long long descTextArray_Count;
@property (copy, nonatomic) NSString *enterSource;
@property (nonatomic) long long expireTime;
@property (nonatomic) long long finishAction;
@property (nonatomic) BOOL finishedShow;
@property (copy, nonatomic) NSString *finishedText;
@property (copy, nonatomic) NSString *finishedToast;
@property (nonatomic) BOOL firstPopUp;
@property (retain, nonatomic) NSMutableArray *iconUrlsArray;
@property (readonly, nonatomic) unsigned long long iconUrlsArray_Count;
@property (retain, nonatomic) NSMutableArray *imgUrlsArray;
@property (readonly, nonatomic) unsigned long long imgUrlsArray_Count;
@property (retain, nonatomic) NSMutableArray *mainTextArray;
@property (readonly, nonatomic) unsigned long long mainTextArray_Count;
@property (nonatomic) long long nextTime;
@property (nonatomic) long long now;
@property (nonatomic) long long restRounds;
@property (copy, nonatomic) NSString *rewardApi;
@property (copy, nonatomic) NSString *rewardToast;
@property (copy, nonatomic) NSString *rewardType;
@property (nonatomic) long long timingType;
@property (retain, nonatomic) NSMutableArray *titleArray;
@property (readonly, nonatomic) unsigned long long titleArray_Count;
@property (copy, nonatomic) NSString *token;

+ (id)descriptor;

@end
