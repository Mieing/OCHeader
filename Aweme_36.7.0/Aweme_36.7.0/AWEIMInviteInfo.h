@class NSString, NSArray, NSDictionary, AWEURLModel;

@interface AWEIMInviteInfo : NSObject

@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSArray *uidArray;
@property (nonatomic) BOOL isInviteFollower;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) AWEURLModel *groupIconURL;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *ext;

- (void).cxx_destruct;

@end
