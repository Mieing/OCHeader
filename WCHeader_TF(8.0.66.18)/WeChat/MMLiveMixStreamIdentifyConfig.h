@class NSString;

@interface MMLiveMixStreamIdentifyConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *sdkUserId;
@property (copy, nonatomic) NSString *sdkRoomId;

- (id)initWithUserId:(id)a0 andRoomId:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
