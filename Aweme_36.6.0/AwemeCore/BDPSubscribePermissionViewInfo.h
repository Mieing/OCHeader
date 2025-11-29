@class NSString;

@interface BDPSubscribePermissionViewInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL canAlways;
@property (nonatomic) BOOL canShowReminder;

- (void).cxx_destruct;
- (id)init;

@end
