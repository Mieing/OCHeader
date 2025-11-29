@class AWEIMImageTrackerConfig, NSArray, NSString, UIImage, AWEIMChatModel;
@protocol AWEIMImageProtocol;

@interface AWEIMChatCellAvatarPresenter : AWEIMCellPresenterBase

@property (class, readonly, nonatomic) BOOL skipNilImageSet;

@property (retain, nonatomic) UIImage *defaultAvatarImageForSkylight;
@property (weak, nonatomic) AWEIMChatModel *chat;
@property (retain) NSArray *urlList;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *localImageName;
@property (nonatomic) double ratio;
@property (nonatomic) BOOL needClearCornerRadius;
@property (nonatomic) BOOL needSetMaskToBounds;
@property (retain) id<AWEIMImageProtocol> keyProvider;
@property (retain, nonatomic) AWEIMImageTrackerConfig *trackConfig;
@property (nonatomic) long long chatListEntryType;
@property (copy, nonatomic) id /* block */ tapAction;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (id)__defaultAvatarImage;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
