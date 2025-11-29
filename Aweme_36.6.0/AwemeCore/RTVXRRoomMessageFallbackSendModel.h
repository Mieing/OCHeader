@class NSSet, NSString, RxDeferred, RTVXRRoomMessage;

@interface RTVXRRoomMessageFallbackSendModel : NSObject

@property (readonly, nonatomic) RTVXRRoomMessage *message;
@property (readonly, copy, nonatomic) NSSet *toUserIDs;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) RxDeferred *deferred;

- (id)initWithMessage:(id)a0 roomID:(id)a1 toUserIDs:(id)a2 deferred:(id)a3;
- (void)mergeWithToUserIDs:(id)a0;
- (void).cxx_destruct;

@end
