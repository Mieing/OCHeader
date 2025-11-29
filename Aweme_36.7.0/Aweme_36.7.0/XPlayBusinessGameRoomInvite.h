@class NSDictionary, NSString;

@interface XPlayBusinessGameRoomInvite : NSObject <XPlayGameRoomInviteProtocol>

@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSDictionary *roomExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inviteWithDic:(id)a0;

- (void).cxx_destruct;

@end
