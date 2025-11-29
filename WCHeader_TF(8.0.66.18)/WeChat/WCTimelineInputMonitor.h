@interface WCTimelineInputMonitor : NSObject

+ (BOOL)input:(id)a0 didChange:(id)a1 withMarkedLength:(long long)a2;
+ (void)input:(id)a0 didCommit:(id)a1 withPastedText:(id)a2;
+ (long long)getMarkedLengthFromTextView:(id)a0;

@end
