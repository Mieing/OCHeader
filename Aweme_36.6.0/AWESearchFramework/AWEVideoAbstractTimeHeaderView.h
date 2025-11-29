@class YYLabel, NSString, AWEAwemeModel;

@interface AWEVideoAbstractTimeHeaderView : UIView <AWESearchVideoAbstractProtocol>

@property (retain, nonatomic) YYLabel *timeTipLabel;
@property (nonatomic) double timeTipLabelWidth;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ jumpTimeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)a0 width:(double)a1 trackParams:(id)a2;
- (id)formattedJumpTimeForTime:(id)a0;
- (void)trackVideoAbstractWithActionType:(id)a0 trackParams:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;
- (double)getHeight;

@end
