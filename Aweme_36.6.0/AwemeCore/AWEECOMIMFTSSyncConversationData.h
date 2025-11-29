@class NSString, NSDictionary, NSArray;

@interface AWEECOMIMFTSSyncConversationData : NSObject <AWEECOMIMFTSSyncDataProtocol>

@property (nonatomic) long long optionType;
@property (copy, nonatomic) NSString *convId;
@property (copy, nonatomic) NSString *convName;
@property (copy, nonatomic) NSString *convIcon;
@property (copy, nonatomic) NSDictionary *convotherExtParams;
@property (copy, nonatomic) NSArray *deletedConvIds;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
