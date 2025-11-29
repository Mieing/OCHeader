@class NSArray, NSDictionary;

@interface AWEIMFTSSyncMessageData : NSObject <AWEIMFTSSyncDataProtocol>

@property (nonatomic) long long optionType;
@property (copy, nonatomic) NSArray *saveMsgIds;
@property (copy, nonatomic) NSArray *deletedMsgIds;
@property (copy, nonatomic) NSArray *deletedByConvIds;
@property (copy, nonatomic) NSDictionary *conversationMap;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
