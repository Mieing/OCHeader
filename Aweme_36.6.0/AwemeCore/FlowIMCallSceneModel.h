@class NSString;

@interface FlowIMCallSceneModel : NSObject {
    void /* unknown type, empty encoding */ _sceneId;
    void /* unknown type, empty encoding */ _modelName;
    void /* unknown type, empty encoding */ _modelDesc;
    void /* unknown type, empty encoding */ _modelKey;
    void /* unknown type, empty encoding */ _modelIconDefault;
    void /* unknown type, empty encoding */ _modelIconSelected;
    void /* unknown type, empty encoding */ _listenWaitingTime;
    void /* unknown type, empty encoding */ _triggerTimeInterval;
    void /* unknown type, empty encoding */ _enableDefaultSubtitle;
    void /* unknown type, empty encoding */ _useOriginalIcon;
    void /* function */ specifiedSpeaker;
}

@property (nonatomic, readonly) long long sceneID;
@property (nonatomic) long long sceneId;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSString *modelDesc;
@property (nonatomic, copy) NSString *modelKey;
@property (nonatomic, copy) NSString *modelIconDefault;
@property (nonatomic, copy) NSString *modelIconSelected;
@property (nonatomic) long long listenWaitingTime;
@property (nonatomic) long long triggerTimeInterval;
@property (nonatomic) BOOL enableDefaultSubtitle;
@property (nonatomic) BOOL useOriginalIcon;
@property (nonatomic, copy) NSString *specifiedSpeaker;

- (void).cxx_destruct;
- (id)init;

@end
