@class HTSLiveAssetStruct, NSString, NSDictionary, NSNumber;
@protocol IESLiveUserEnterEffectNodeDelegate;

@interface IESLiveUserEnterEffectNode : NSObject <IESLiveUserEnterNodeProtocol>

@property (retain, nonatomic) HTSLiveAssetStruct *effectModel;
@property (retain, nonatomic) NSDictionary *effectMixGiftMaskInfo;
@property (copy, nonatomic) NSString *finishSchema;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) long long source;
@property (weak, nonatomic) id<IESLiveUserEnterEffectNodeDelegate> delegate;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id message;
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
