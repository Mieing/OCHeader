@class NSString, NSDictionary;

@interface AWEIMHalfScreenContactTableViewHeaderContext : NSObject

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL needWechatHeader;
@property (nonatomic) unsigned long long disableItemOption;
@property (nonatomic) long long weChatCellType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL useUniformStyle;
@property (copy, nonatomic) NSString *faceToFaceCellTag;
@property (copy, nonatomic) NSDictionary *paramDict;
@property (nonatomic) BOOL shouldDowngradeInviteWechat;
@property (nonatomic) BOOL disableWechatAndQQ;

- (void).cxx_destruct;

@end
