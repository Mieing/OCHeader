@class NSNumber, NSString, NSDictionary;

@interface IESLiveLinkmicLinkAudienceApplyParams : IESLiveLinkmicLinkAudienceParams <IESLiveLinkmicLinkAudienceApplyParams>

@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSNumber *position;
@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSNumber *channelID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
