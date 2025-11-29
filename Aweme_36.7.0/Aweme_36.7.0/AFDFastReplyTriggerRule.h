@class NSString;

@interface AFDFastReplyTriggerRule : NSObject <AFDFastReplyTriggerRuleProtocol>

@property (nonatomic) BOOL triggerDirectly;
@property (nonatomic) BOOL triggerLiked;
@property (nonatomic) BOOL triggerPlayFinish;
@property (nonatomic) BOOL triggerAlbumPlayFinish;
@property (nonatomic) BOOL triggerPlayOver;
@property (nonatomic) double playOverLimitation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rule;

- (id)init;

@end
