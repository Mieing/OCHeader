@class NSMutableArray;

@interface RoamBackupRangeItem_ContactFilter : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *isExactUsername;
@property (retain, nonatomic) NSMutableArray *belongToGroup;
@property (retain, nonatomic) NSMutableArray *inSpecialLabel;
@property (retain, nonatomic) NSMutableArray *hasSpecialFriend;

+ (void)initialize;

- (void)setHasSpecialFriend:(id)a0;
- (id)hasSpecialFriend;
- (void)setInSpecialLabel:(id)a0;
- (id)inSpecialLabel;
- (void)setBelongToGroup:(id)a0;
- (id)belongToGroup;
- (void)setIsExactUsername:(id)a0;
- (id)isExactUsername;

@end
