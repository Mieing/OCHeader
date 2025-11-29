@class NSString, NSArray, NSDictionary;

@interface RTVGroupCreatePanelContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSArray *stickOnTopUidArray;
@property (copy, nonatomic) NSArray *defaultSelectUserIDs;
@property (copy, nonatomic) NSDictionary *userExt;
@property (nonatomic) BOOL noNeedWechatShare;
@property (nonatomic) BOOL noNeedCurrentGroup;
@property (nonatomic) BOOL needFloatModeMessageVC;
@property (nonatomic) BOOL noNeedSendGroupShareCommand;
@property (copy, nonatomic) NSString *contentSectionInsetsString;
@property (retain, nonatomic) NSDictionary *createGroupExt;
@property (retain, nonatomic) NSDictionary *extraTrackInfo;

- (id)initWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (void).cxx_destruct;

@end
