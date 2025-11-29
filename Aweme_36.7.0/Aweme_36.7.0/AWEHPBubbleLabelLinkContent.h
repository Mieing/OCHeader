@class NSString;

@interface AWEHPBubbleLabelLinkContent : NSObject <AWEHomePageBubbleContentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getContentViewWithConfig:(id)a0;
- (struct CGSize { double x0; double x1; })getContentSizeWithConfig:(id)a0;

@end
