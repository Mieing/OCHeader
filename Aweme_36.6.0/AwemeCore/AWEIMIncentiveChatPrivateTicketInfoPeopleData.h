@class NSString, NSNumber;

@interface AWEIMIncentiveChatPrivateTicketInfoPeopleData : NSObject

@property (copy, nonatomic) NSString *toIdentityID;
@property (copy, nonatomic) NSString *convID;
@property (copy, nonatomic) NSString *convShortID;
@property (retain, nonatomic) NSNumber *relationCycleDay;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
