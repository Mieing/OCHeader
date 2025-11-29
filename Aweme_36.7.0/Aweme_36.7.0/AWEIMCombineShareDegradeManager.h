@interface AWEIMCombineShareDegradeManager : NSObject

+ (BOOL)isSupportCombineShareWithMessage:(id)a0;
+ (id)p_convertToIMMessageForDisplay:(id)a0;
+ (id)degradeMessageForce:(id)a0 contentMessage:(id)a1;
+ (id)degradeMessageDescribWithContentMessage:(id)a0;
+ (id)degradeMessageDescribWithMessageType:(long long)a0 aweType:(long long)a1;
+ (id)p_downgradeMessageDescribWithContentMessage:(id)a0 messageType:(long long)a1 aweType:(long long)a2;
+ (id)convertToIMMessageForHint:(id)a0;
+ (id)textDescribeWithWithContentMessage:(id)a0 messageType:(long long)a1 aweType:(long long)a2;
+ (id)defaultTextDescribe;
+ (id)p_convertCombineShareMessage:(id)a0 toIMMessageWithCalculateSize:(BOOL)a1;
+ (id)degradeMessageIfNeed:(id)a0 combineShareMessage:(id)a1;
+ (id)degradeMessageWithSubMessage:(id)a0;
+ (id)degradeMessageDescribWithContentMessage:(id)a0 messageType:(long long)a1 aweType:(long long)a2;
+ (BOOL)isSupportShowReferenceContentInCombineShare:(long long)a0 aweType:(long long)a1;
+ (BOOL)isSupportCombineShareImportWithMessage:(id)a0;

@end
