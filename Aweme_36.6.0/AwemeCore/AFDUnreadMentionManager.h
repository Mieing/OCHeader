@class NSString;

@interface AFDUnreadMentionManager : NSObject <AFDUnreadMentionManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportMentionReadWithAwemeID:(id)a0 fromUID:(id)a1 completion:(id /* block */)a2;
+ (id)mentionTagModelWithModel:(id)a0;
+ (id)mentionTagBackgroundColor;
+ (id)mentionTagTextColor;
+ (id)mentionTagIconWithModel:(id)a0;
+ (id)mentionTagTextWithModel:(id)a0;
+ (id)mentionContentWithModel:(id)a0;
+ (BOOL)shouldReportMentionVideoExposureStateWithModel:(id)a0;
+ (void)reportMentionVideoExposureStateWithParams:(id)a0 completion:(id /* block */)a1;


@end
