@interface LocationMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)locationChatNamePath:(id)a0 ThumeImageStyle:(unsigned long long)a1;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (id)getLocationThumbImage:(unsigned long long)a0;
- (BOOL)hasReferImage;
- (id)getReferImage;

@end
