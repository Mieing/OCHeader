@class NSString;

@interface LSIMMessageCardRobotListItem : NSObject

@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSString *content;

- (id)initWithItemID:(id)a0 content:(id)a1;
- (void).cxx_destruct;

@end
