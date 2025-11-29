@class NSString, HTSLiveUser;

@interface HTSLiveVSLinkNode : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *roomIdStr;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long liveRoomMode;
@property (retain, nonatomic) HTSLiveUser *owner;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) int source;

+ (id)descriptor;

@end
