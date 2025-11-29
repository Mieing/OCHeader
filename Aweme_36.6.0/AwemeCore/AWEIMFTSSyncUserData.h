@class NSString, NSArray, AWEIMFTSChatModel;

@interface AWEIMFTSSyncUserData : NSObject <AWEIMFTSSyncDataProtocol>

@property (nonatomic) long long optionType;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *convId;
@property (copy, nonatomic) NSArray *convIds;
@property (retain, nonatomic) AWEIMFTSChatModel *chatModel;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
