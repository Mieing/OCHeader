@class NSString, AWEStudioVideoAnchorModel;

@interface AWEPostPageBrandPassiveAnchor : NSObject <AWEPostPageExtraPassiveAnchor>

@property (weak, nonatomic) AWEStudioVideoAnchorModel *anchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPassiveAnchor;
- (void)configAnchorVM:(id)a0;
- (void).cxx_destruct;

@end
