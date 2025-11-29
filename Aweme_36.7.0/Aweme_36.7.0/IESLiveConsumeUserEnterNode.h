@class NSNumber, NSString, NSDictionary;

@interface IESLiveConsumeUserEnterNode : NSObject <IESLiveUserEnterNodeProtocol>

@property (retain, nonatomic) id message;
@property (retain, nonatomic) NSNumber *purchaseCount;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *consumeText;
@property (copy, nonatomic) NSString *iconURLString;
@property (copy, nonatomic) NSString *iconPlaceholder;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int priority;
@property (nonatomic) BOOL shouldStayInPowerSaveMode;
@property (nonatomic) BOOL discarded;
@property (nonatomic) double maxWaitTime;
@property (retain, nonatomic) NSNumber *showTime;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *subSceneName;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
