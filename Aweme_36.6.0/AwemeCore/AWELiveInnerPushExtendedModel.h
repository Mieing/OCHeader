@class NSNumber, NSString, HTSLiveRoom;

@interface AWELiveInnerPushExtendedModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *anchorID;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *pushType;
@property (copy, nonatomic) NSString *issueID;
@property (retain, nonatomic) NSNumber *isPaidLive;
@property (copy, nonatomic) NSString *watchPaidliveStatus;
@property (copy, nonatomic) NSString *pushSource;
@property (copy, nonatomic) NSString *anchorType;
@property (nonatomic) long long liveRoomMode;
@property (copy, nonatomic) NSString *functionType;
@property (copy, nonatomic) NSString *privacyStatus;
@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSString *postBack;
@property (copy, nonatomic) NSString *avatarStyle;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
