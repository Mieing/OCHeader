@interface AutoTranslateMsgUtil : NSObject

+ (void)increaseAutoTranslateCount:(id)a0;
+ (BOOL)isAutoTranslateTriggerPoint:(id)a0;
+ (void)resetAutoTranslateCount:(id)a0;
+ (void)setAutoTranslateEntryExpose:(id)a0;
+ (BOOL)isAutoTranslateEntryExpose:(id)a0;
+ (BOOL)canShowAutoTranslateEntry:(id)a0;
+ (BOOL)isAutoTranslateEnable:(id)a0;
+ (void)openAutoTranslate:(id)a0 fromLocalId:(unsigned int)a1;
+ (void)resetAutoTranslate:(id)a0 fromLocalId:(unsigned int)a1;
+ (unsigned int)getAutoTranslateLocalId:(id)a0;
+ (void)closeAutoTranslate:(id)a0;
+ (BOOL)isExptAutoTranslateOpen;
+ (void)notifyAutoTranslateStart:(id)a0;
+ (BOOL)canInsertAutoTranslateTips;
+ (void)insertAutoTranslateTips;
+ (void)notifyAutoTranslateAllSessionsChanged;
+ (BOOL)isAutoTranslateAllSessions;
+ (unsigned int)getAutoTranslateAllSessionsTime;

@end
