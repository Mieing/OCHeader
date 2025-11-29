@class NSString;

@interface AWEFeedLongVideoPlusUtil : NSObject <AWEFeedLongVideoPlusUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)longVideoStartPlayTypeWithModel:(id)a0;
+ (double)updateStartTimeForFeedWithModel:(id)a0;
+ (void)submitHistoryWithAweme:(id)a0 currentPlaybackTime:(double)a1 extraParams:(id)a2;


@end
