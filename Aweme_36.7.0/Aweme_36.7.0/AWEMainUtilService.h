@class NSString;

@interface AWEMainUtilService : HTSService <AWEMainUtilService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)channelTypeWithReferString:(id)a0;
+ (id)obtainChannelID;
+ (void)setChannelID:(id)a0;


@end
