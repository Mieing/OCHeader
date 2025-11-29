@class NSString;

@interface AWEBatManRoomInviteModel : NSObject <AWEIMBatManInfoProtocol>

@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *coverImageURL;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *outerScheme;
@property (copy, nonatomic) NSString *callingPushScheme;
@property (copy, nonatomic) NSString *callingPushOuterScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
