@class NSArray, HTSLiveGiftMessage;
@protocol IESLiveGiftStructOuterProtocol;

@interface IESLiveGiftMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy

@property (retain, nonatomic) HTSLiveGiftMessage *giftMessage;
@property (copy, nonatomic) NSArray *giftURLArray;
@property (retain, nonatomic) id<IESLiveGiftStructOuterProtocol> giftModel;

- (id)buildData;
- (long long)buildingMode;
- (void)AsyncBuildData:(id /* block */)a0;
- (BOOL)filterWithParams:(id)a0;
- (id)buildDataBasePart;
- (void).cxx_destruct;
- (BOOL)filter;

@end
