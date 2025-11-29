@class NSString, NSDictionary, AWELiteActivityPopupTrackEvent, AWELiteInviterModel;

@interface AWELiteInvitationPopupModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long popupType;
@property (copy, nonatomic) NSString *inviterAvatarUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *jumpLink;
@property (copy, nonatomic) NSString *footText;
@property (copy, nonatomic) NSString *footJumpLink;
@property (retain, nonatomic) AWELiteInviterModel *inviter;
@property (retain, nonatomic) AWELiteActivityPopupTrackEvent *trackEvents;
@property (retain, nonatomic) NSDictionary *trackParmas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackEventsJSONTransformer;
+ (id)inviterJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
