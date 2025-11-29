@class NSArray, NSDictionary, NSString, AWEVideoPublishViewModel;
@protocol ACCVideoEditBottomControlLayoutDelegate;

@interface ACCVideoEditBottomControlRectangleLayout : NSObject <ACCVideoEditBottomControlLayout>

@property (copy, nonatomic) NSArray *types;
@property (copy, nonatomic) NSArray *buttons;
@property (nonatomic) long long layoutStyle;
@property (copy, nonatomic) NSDictionary *typeTitleDic;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) double originY;
@property (weak, nonatomic) id<ACCVideoEditBottomControlLayoutDelegate> delegate;
@property (copy, nonatomic) id /* block */ buttonConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(long long)a0 typeTitleDic:(id)a1;
- (void)updateWithTypes:(id)a0 repository:(id)a1 viewContainer:(id)a2;
- (id)bottomPanelButtonTitleWithType:(long long)a0;
- (id)handleLayoutStyleTrisectionWithTypes:(id)a0 viewContainer:(id)a1;
- (id)handleLayoutStyleHalvesWithTypes:(id)a0 viewContainer:(id)a1;
- (id)handleLayoutStyleNonEqualWithTypes:(id)a0 viewContainer:(id)a1;
- (double)bottomButtonGap;
- (id)p_imageWithType:(long long)a0;
- (void).cxx_destruct;
- (id)buttonWithType:(long long)a0;
- (id)allButtons;
- (void)bottomButtonTapped:(id)a0;

@end
