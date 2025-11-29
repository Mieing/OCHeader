@class NSString;

@interface AWEIMGroupCommandShareToIMModel : NSObject

@property (copy, nonatomic) NSString *groupCommand;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL shouldShowNotificationBar;

- (id)initWithGroupCommand:(id)a0 conversationID:(id)a1;
- (void).cxx_destruct;

@end
