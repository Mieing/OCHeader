@class NSArray, UIImageView, UILabel;

@interface MMLiveVisibilitySelectButton : MMUIButton

@property (retain, nonatomic) NSArray *preparedRedpacketRoomIds;
@property (retain, nonatomic) NSArray *visibleRoomIds;
@property (retain, nonatomic) NSArray *visibleUserNames;
@property (nonatomic) long long lastSelectMode;
@property (nonatomic) int liveMode;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL hideLogo;
@property (nonatomic) double maxWidth;

- (id)init;
- (void)hideLogo:(BOOL)a0 maxWidth:(double)a1;
- (void)updateWithPrepareChatroomIds:(id)a0 lastSelectMode:(long long)a1 liveMode:(int)a2;
- (void)updateWithVisibleRoomIds:(id)a0 visibleUserNames:(id)a1 firstVisibleUserName:(id)a2 fromRoomId:(id)a3 selectMode:(long long)a4 liveMode:(int)a5;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (void).cxx_destruct;

@end
