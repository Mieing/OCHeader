@interface MessageTransferUtil : NSObject

+ (unsigned long long)fileExpiredTimeInterval;
+ (long long)secondsBeforeFileExpired:(id)a0;
+ (long long)daysBeforeFileExpired:(id)a0;
+ (BOOL)isMessageFileExpired:(id)a0;

@end
