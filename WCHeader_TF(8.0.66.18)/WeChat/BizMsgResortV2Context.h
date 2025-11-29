@class NSString, NSMutableArray, BizMsgResortV2Context_LastDeleteMsgBoxInfo;

@interface BizMsgResortV2Context : WXPBGeneratedMessage

@property (nonatomic) int currentMsgBoxPos;
@property (retain, nonatomic) NSString *oftenReadBizusername;
@property (retain, nonatomic) NSMutableArray *topSessionBox;
@property (retain, nonatomic) NSMutableArray *visibleSessionBox;
@property (retain, nonatomic) BizMsgResortV2Context_LastDeleteMsgBoxInfo *lastDeleteMsgBoxInfo;
@property (retain, nonatomic) NSMutableArray *tabBox;

+ (void)initialize;

- (void)setTabBox:(id)a0;
- (id)tabBox;
- (void)setLastDeleteMsgBoxInfo:(id)a0;
- (id)lastDeleteMsgBoxInfo;
- (void)setVisibleSessionBox:(id)a0;
- (id)visibleSessionBox;
- (void)setTopSessionBox:(id)a0;
- (id)topSessionBox;
- (void)setOftenReadBizusername:(id)a0;
- (id)oftenReadBizusername;
- (void)setCurrentMsgBoxPos:(int)a0;
- (int)currentMsgBoxPos;

@end
