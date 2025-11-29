@class HTSLiveChatMessage;

@interface IESLiveChatMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy

@property (retain, nonatomic) HTSLiveChatMessage *chatMessage;

- (id)buildData;
- (long long)buildingMode;
- (void)AsyncBuildData:(id /* block */)a0;
- (BOOL)isLottery;
- (BOOL)filterWithParams:(id)a0;
- (id)initWithMetaData:(id)a0 diContext:(id)a1;
- (void)buildDataForNormalViewPartForData:(id)a0 syncBuild:(BOOL)a1;
- (id)textColorForCurrentMessage;
- (void)loadAttributedStringWithPlainText:(id)a0 forViewModel:(id)a1;
- (void).cxx_destruct;
- (BOOL)filter;

@end
