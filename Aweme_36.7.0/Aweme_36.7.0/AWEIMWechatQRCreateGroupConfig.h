@class NSString, NSArray;

@interface AWEIMWechatQRCreateGroupConfig : NSObject

@property (retain, nonatomic) id shareContext;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSArray *createGroupInviteUidList;
@property (copy, nonatomic) id /* block */ closePreVCBlock;
@property (copy, nonatomic) id /* block */ createGroupCompleteBlock;

- (void).cxx_destruct;

@end
