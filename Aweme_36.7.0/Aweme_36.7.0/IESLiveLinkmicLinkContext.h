@class NSNumber, NSString, NSObject;

@interface IESLiveLinkmicLinkContext : NSObject <IESLiveLinkmicLinkBaseContext>

@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, nonatomic) NSObject *extraData;
@property (readonly, nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSNumber *channelID;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly, copy, nonatomic) NSString *linkerSessionId;
@property (readonly, copy, nonatomic) NSString *remoteLinkerSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonInfo;
- (void).cxx_destruct;

@end
