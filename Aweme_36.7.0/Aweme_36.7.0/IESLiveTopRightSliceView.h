@class HTSLiveCommonCardArea, NSArray, NSString, UIView;

@interface IESLiveTopRightSliceView : UIView <IESLiveDynamicViewDelegate>

@property (retain, nonatomic) HTSLiveCommonCardArea *cardArea;
@property (retain, nonatomic) UIView *sliceXView;
@property (nonatomic) double cardWidth;
@property (retain, nonatomic) NSArray *fieldsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerSliceXEvent:(id)a0;
- (id)initWithCardArea:(id)a0 diContext:(id)a1;
- (void)updateCardArea:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
