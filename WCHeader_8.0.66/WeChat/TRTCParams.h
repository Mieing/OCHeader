@class NSString;

@interface TRTCParams : NSObject

@property (nonatomic) unsigned int sdkAppId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userSig;
@property (nonatomic) unsigned int roomId;
@property (copy, nonatomic) NSString *strRoomId;
@property (nonatomic) long long role;
@property (copy, nonatomic) NSString *streamId;
@property (copy, nonatomic) NSString *userDefineRecordId;
@property (copy, nonatomic) NSString *privateMapKey;
@property (copy, nonatomic) NSString *bussInfo;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
