@class NSString, NSDictionary, NSNumber;

@interface IESLiveRevenueImpl.HTSLiveSwiftNativeAnimationUserEnterNode : NSObject <IESLiveUserEnterNodeProtocol> {
    void /* function */ type;
    void /* function */ identifier;
    void /* function */ trackInfo;
    void /* function */ sceneName;
    void /* function */ subSceneName;
    void /* unknown type, empty encoding */ messageID;
    void /* unknown type, empty encoding */ enterType;
    void /* unknown type, empty encoding */ desc;
    void /* unknown type, empty encoding */ user;
    void /* unknown type, empty encoding */ effectConfig;
    void /* function */ message;
    void /* unknown type, empty encoding */ hasEffectConfig;
    void /* unknown type, empty encoding */ isNeedEcomFansclubReverse;
}

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int priority;
@property (nonatomic) BOOL discarded;
@property (nonatomic) double maxWaitTime;
@property (nonatomic, copy) NSDictionary *trackInfo;
@property (nonatomic, copy) NSString *sceneName;
@property (nonatomic, copy) NSString *subSceneName;
@property (nonatomic, retain) NSNumber *showTime;
@property (nonatomic) BOOL shouldStayInPowerSaveMode;
@property (nonatomic, copy) id message;

- (void).cxx_destruct;
- (id)init;

@end
