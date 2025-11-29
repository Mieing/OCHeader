@class UIImage, IESIMEmoticonModel, NSString;

@interface AWEIMEmoticonReplyViewModel : NSObject

@property (nonatomic) unsigned long long vmType;
@property (nonatomic) unsigned long long vmSource;
@property (retain, nonatomic) IESIMEmoticonModel *emoticon;
@property (retain, nonatomic) UIImage *icon;
@property (readonly, copy, nonatomic) NSString *accessTitle;
@property (retain, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *key;

+ (id)updatedMsgEmoticonListWithInsertEmojis:(id)a0;
+ (id)initialMsgEmoticonListWithMessage:(id)a0;
+ (id)recentMsgEmoticonList;
+ (id)fullReplyEmoticonPanelListModel;
+ (id)p_backupEmoticonList;
+ (id)moreEmoticonViewModel;

- (id)extraTrackParams;
- (void).cxx_destruct;

@end
