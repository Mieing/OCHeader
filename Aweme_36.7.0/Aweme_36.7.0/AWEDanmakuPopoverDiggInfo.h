@class NSString;

@interface AWEDanmakuPopoverDiggInfo : NSObject <AWEDanmakuOptionBubbleViewDiggInfoProtocol>

@property (nonatomic) BOOL digged;
@property (nonatomic) BOOL needDiggPopoverGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diggGuideAnimation;

@end
