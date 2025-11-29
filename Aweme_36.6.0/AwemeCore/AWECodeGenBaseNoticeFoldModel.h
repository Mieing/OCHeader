@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenBaseNoticeFoldModel : AWEBaseDataModel

@property (nonatomic) int group;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long foldStatus;
@property (retain, nonatomic) AWECodeGenUrlModel *imageUrlModel;
@property (nonatomic) long long lastMsgTime;
@property (nonatomic) long long lastReadTime;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) int unreadCount;
@property (nonatomic) long long demoteState;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
