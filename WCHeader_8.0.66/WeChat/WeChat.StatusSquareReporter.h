@interface WeChat.StatusSquareReporter : NSObject {
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ sceneSessionId;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ iconId;
    void /* unknown type, empty encoding */ iconType;
    void /* unknown type, empty encoding */ iconDescription;
    void /* unknown type, empty encoding */ username;
    void /* unknown type, empty encoding */ userCount;
    void /* unknown type, empty encoding */ hasReddot;
    void /* unknown type, empty encoding */ isSameTopic;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ topicClusterType;
    void /* unknown type, empty encoding */ topicInfos;
    void /* unknown type, empty encoding */ actionResult;
    void /* unknown type, empty encoding */ myStatusList;
}

- (id)initWithSessionId:(id)a0 sceneSessionId:(id)a1 scene:(long long)a2;
- (id)init;
- (void).cxx_destruct;

@end
