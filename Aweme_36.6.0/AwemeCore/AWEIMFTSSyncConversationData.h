@class NSString, NSArray;

@interface AWEIMFTSSyncConversationData : NSObject <AWEIMFTSSyncDataProtocol>

@property (nonatomic) long long optionType;
@property (copy, nonatomic) NSString *convId;
@property (copy, nonatomic) NSArray *deletedConvIds;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
