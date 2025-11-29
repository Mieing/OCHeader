@class NSString, FinderJumpInfo;

@interface FinderPromotionJumpInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *toastMsg;
@property (nonatomic) BOOL showToastMsg;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int destinationType;

+ (void)initialize;

- (void)setDestinationType:(unsigned int)a0;
- (unsigned int)destinationType;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setShowToastMsg:(BOOL)a0;
- (BOOL)showToastMsg;
- (void)setToastMsg:(id)a0;
- (id)toastMsg;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;

@end
