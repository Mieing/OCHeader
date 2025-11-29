@class OrderedDictionary, NSMutableDictionary;

@interface MMDictationReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) OrderedDictionary *voiceItems;

- (id)reportItemForKey:(id)a0;
- (void)setReportItem:(id)a0 forKey:(id)a1;
- (void)removeReportItemForKey:(id)a0;
- (void)onStartRecord:(id)a0 chatName:(id)a1 voiceId:(id)a2 triggerScene:(unsigned long long)a3;
- (void)onEndRecord:(id)a0 chatName:(id)a1 voiceId:(id)a2 stopReason:(long long)a3 transText:(id)a4;
- (void)onUserModifyText:(id)a0 chatName:(id)a1;
- (void)onSend:(id)a0 chatName:(id)a1 fullText:(id)a2;
- (void)onClear:(id)a0 chatName:(id)a1;
- (void)onExpose:(id)a0 chatName:(id)a1 triggerScene:(unsigned long long)a2;
- (void)onClearCgi:(id)a0;
- (void)onCgiStartVoiceId:(id)a0 seq:(int)a1;
- (void)onCgiEndVoiceId:(id)a0 seq:(int)a1 textCount:(long long)a2 clickDate:(id)a3;
- (void).cxx_destruct;

@end
