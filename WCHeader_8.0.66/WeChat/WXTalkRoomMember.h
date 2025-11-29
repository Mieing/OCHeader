@class NSString;

@interface WXTalkRoomMember : NSObject

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int memberId;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
