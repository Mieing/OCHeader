@class NSString;

@interface MMMusicCheckPermissionResult : NSObject

@property (nonatomic) BOOL canCreate;
@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) NSString *statusVerifyInfo;
@property (nonatomic) BOOL chatroomEnabled;

- (id)description;
- (void).cxx_destruct;

@end
