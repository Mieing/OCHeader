@interface FinderLiveShortcutWordingConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int getShortcutWordingAfterJoinliveSec;
@property (nonatomic) unsigned int showNextShortcutWordingSec;
@property (nonatomic) BOOL enableGetShortcutWording;
@property (nonatomic) BOOL enableGetShortcutWordingWhenOpenChatbox;
@property (nonatomic) unsigned int maxShowDurationSec;
@property (nonatomic) unsigned int minShowDurationSec;

+ (void)initialize;

@end
