@class NSString;

@interface AWEIMHightlyProspectiveView : UIImageView <AWEIMHightlyProspectiveViewInterface>

@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWithState:(long long)a0;

@end
