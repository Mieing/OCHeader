@class NSNumber, NSString, NSDictionary;

@interface IESLiveLinkmicLinkAudienceParams : NSObject <IESLiveLinkmicLinkParams>

@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSNumber *channelID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonInfo;
- (void).cxx_destruct;

@end
