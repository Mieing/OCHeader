@class AWECommentLongPressPanelBizParam, NSString, AWECommentLongPressPanelParam;
@protocol AWECommentPanelLongPressConfigurationProtocol;

@interface AWECommentLongPressPanelContext : AWEPageContext <AWECommentBaseContextProtocol>

@property (weak, nonatomic) id containerDelegate;
@property (retain, nonatomic) AWECommentLongPressPanelParam *params;
@property (retain, nonatomic) id<AWECommentPanelLongPressConfigurationProtocol> config;
@property (retain, nonatomic) AWECommentLongPressPanelBizParam *bizParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
