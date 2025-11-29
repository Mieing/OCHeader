@class UIColor, NSArray, NSString, IESLiveInteractionLayout;

@interface IESLiveInteractConfigLayoutProcessor : NSObject <IESLiveInteractConfigLayoutProcessorProrocol>

@property (readonly, nonatomic) BOOL disableSeparator;
@property (readonly, nonatomic) double separatorWidth;
@property (readonly, nonatomic) BOOL useMarginReplaceSeparator;
@property (readonly, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (copy, nonatomic) NSArray *guestFrames;
@property (copy, nonatomic) NSArray *guestSeparatorInsets;
@property (copy, nonatomic) NSArray *guestSeparatorFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)guestLayoutConfigs;
- (id)separatorLayoutConfigs;
- (id)initWithGuestFrames:(id)a0 layout:(id)a1;
- (id)calculateGuestSeparatorInsets;
- (id)calculateguestSeparatorFrames;
- (BOOL)isDynamicLayout1V6;
- (void).cxx_destruct;

@end
