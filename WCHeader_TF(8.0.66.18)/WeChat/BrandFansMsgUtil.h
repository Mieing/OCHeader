@interface BrandFansMsgUtil : NSObject

+ (id)removeBizSuffix:(id)a0;
+ (id)addBizSuffix:(id)a0;
+ (void)fixBypMsgIfNeed:(id)a0;
+ (id)sendFailedWordingForFailCode:(unsigned int)a0;
+ (void)goToBizProfileWithUsername:(id)a0 topViewController:(id)a1;
+ (void)goToFinderProfileWithUsername:(id)a0 currentNavController:(id)a1;
+ (id)getContactByUsername:(id)a0;

@end
