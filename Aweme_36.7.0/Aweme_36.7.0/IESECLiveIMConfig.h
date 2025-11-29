@class NSString;

@interface IESECLiveIMConfig : NSObject

@property (copy, nonatomic) NSString *bizIdentity;
@property (copy, nonatomic) NSString *roomIdentity;
@property (copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) BOOL isValid;

+ (id)defaultAudienceConfigWithRoomID:(id)a0;

- (void).cxx_destruct;

@end
