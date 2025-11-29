@class NSString, NSNumber, AWEAwemeModel;

@interface BDATMStaticValue : HTSService <BDATMStaticValue> {
    NSString *anchorId;
    NSString *atmValueStatic;
    id /* block */ durationBlock;
    NSNumber *nt;
    id /* block */ playPercentBlock;
    NSNumber *pricingType;
    NSString *roomId;
    id /* block */ stayTimeBlock;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSString *columnType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)durationBlock;
- (void)setDurationBlock:(id /* block */)a0;
- (id /* block */)stayTimeBlock;
- (void)setStayTimeBlock:(id /* block */)a0;
- (id /* block */)playPercentBlock;
- (void)setPlayPercentBlock:(id /* block */)a0;
- (id)anchorId;
- (void)setAnchorId:(id)a0;
- (void)setPricingType:(id)a0;
- (id)nt;
- (void)setNt:(id)a0;
- (id)atmValueStatic;
- (void)setAtmValueStatic:(id)a0;
- (id)pricingType;
- (id)roomId;
- (void)setRoomId:(id)a0;
- (void).cxx_destruct;

@end
