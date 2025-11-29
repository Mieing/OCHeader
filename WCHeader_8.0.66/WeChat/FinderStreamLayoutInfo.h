@class NSMutableArray;

@interface FinderStreamLayoutInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *divider;
@property (retain, nonatomic) NSMutableArray *card;
@property (retain, nonatomic) NSMutableArray *layoutId;
@property (retain, nonatomic) NSMutableArray *liveCard;

+ (void)initialize;

- (id)mixWithDataArray:(id)a0 scene:(int)a1 dataScene:(id)a2;

@end
