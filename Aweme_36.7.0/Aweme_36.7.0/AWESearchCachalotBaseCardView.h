@class NSString;

@interface AWESearchCachalotBaseCardView : UIView <AWESearchCachalotCardViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (id)componentView;

@end
