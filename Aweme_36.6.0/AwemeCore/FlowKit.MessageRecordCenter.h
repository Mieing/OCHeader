@interface FlowKit.MessageRecordCenter : NSObject {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ voiceInputViewModel;
    void /* unknown type, empty encoding */ _currentMessageID;
    void /* unknown type, empty encoding */ _currentMeetingID;
    void /* unknown type, empty encoding */ _currentBotID;
    void /* unknown type, empty encoding */ _currentConversationID;
    void /* unknown type, empty encoding */ _currentModel;
    void /* unknown type, empty encoding */ _timer;
    void /* unknown type, empty encoding */ _startTime;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ isConnecting;
    void /* unknown type, empty encoding */ isStartTracked;
    void /* unknown type, empty encoding */ isStopTracked;
    void /* unknown type, empty encoding */ recordPauseTime;
    void /* unknown type, empty encoding */ emptyRecordDuration;
    void /* unknown type, empty encoding */ stopTime;
    void /* unknown type, empty encoding */ waitingASREndedCount;
}

- (void).cxx_destruct;
- (id)init;

@end
