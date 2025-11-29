@class NSString, NSArray, HTSLiveText;

@interface IESLiveInteractionFanTicketNode : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *fanticketValue;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *sendGiftUserID;
@property (copy, nonatomic) NSString *receivedGiftUserID;
@property (copy, nonatomic) NSString *thankContent;
@property (nonatomic) long long thankDuration;
@property (copy, nonatomic) NSArray *avatarURLList;
@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) long long feedbackType;
@property (copy, nonatomic) NSString *schema;

- (void).cxx_destruct;

@end
