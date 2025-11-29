@interface FlowKit.MessageReader : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ trackDelegate;
    void /* unknown type, empty encoding */ loudnessNormalizationTracker;
    void /* unknown type, empty encoding */ _audioAdapter;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _trackerProvider;
    void /* unknown type, empty encoding */ _currentReadingMessageID;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ canceledMessages;
    void /* unknown type, empty encoding */ readingSession;
    void /* unknown type, empty encoding */ enabled;
    void /* unknown type, empty encoding */ readerRecord;
}

- (void).cxx_destruct;
- (id)init;

@end
