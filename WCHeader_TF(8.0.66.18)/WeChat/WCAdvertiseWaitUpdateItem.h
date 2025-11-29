@class NSString, NSData;

@interface WCAdvertiseWaitUpdateItem : MMObject

@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) unsigned int uiFromScene;
@property (nonatomic) int source;
@property (retain, nonatomic) NSString *syncBuffer;
@property (retain, nonatomic) NSData *remindFriendsInfo;
@property (nonatomic) int reportScene;

- (id)description;
- (void).cxx_destruct;

@end
