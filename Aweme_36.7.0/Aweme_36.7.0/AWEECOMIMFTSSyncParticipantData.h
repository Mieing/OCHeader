@class NSArray;

@interface AWEECOMIMFTSSyncParticipantData : NSObject <AWEECOMIMFTSSyncDataProtocol>

@property (nonatomic) long long optionType;
@property (copy, nonatomic) NSArray *uids;
@property (copy, nonatomic) NSArray *convIds;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
