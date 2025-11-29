@interface WxaTimeRecorder : NSObject

+ (id)startTimeRecord;
+ (void)startKeyPointTimeRecord:(id)a0 key:(id)a1;
+ (void)checkKeyPointTimeRecord:(id)a0 key:(id)a1;
+ (id)endTimeRecord:(id)a0;
+ (void)setKVTimeRecord:(id)a0 key:(id)a1 value:(id)a2;
+ (id)getKVTimeRecord:(id)a0 key:(id)a1;
+ (void)clearKVTimeRecord:(id)a0;

- (id)init;

@end
