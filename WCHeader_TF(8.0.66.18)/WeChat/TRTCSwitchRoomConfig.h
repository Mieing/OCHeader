@class NSString;

@interface TRTCSwitchRoomConfig : NSObject

@property (nonatomic) unsigned int roomId;
@property (copy, nonatomic) NSString *strRoomId;
@property (copy, nonatomic) NSString *userSig;
@property (copy, nonatomic) NSString *privateMapKey;

- (void).cxx_destruct;

@end
