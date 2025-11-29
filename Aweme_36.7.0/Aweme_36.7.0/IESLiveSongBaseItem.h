@class NSString;
@protocol IESLiveSongBaseItemDelegate;

@interface IESLiveSongBaseItem : IESLiveListViewItem

@property (weak, nonatomic) id<IESLiveSongBaseItemDelegate> delegate;
@property (copy, nonatomic) NSString *wantListenText;
@property (nonatomic) BOOL faviorteHidden;
@property (copy, nonatomic) NSString *addSongText;
@property (nonatomic) long long index;
@property (nonatomic) BOOL multiChorusEnable;
@property (nonatomic) BOOL isVideoChorus;
@property (nonatomic) BOOL shouldShowMVButton;
@property (nonatomic) BOOL showClimax;
@property (nonatomic) unsigned long long tryListenStatusType;

- (Class)classForItem;
- (void).cxx_destruct;

@end
