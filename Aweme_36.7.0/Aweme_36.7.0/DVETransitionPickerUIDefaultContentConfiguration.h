@class NSString;

@interface DVETransitionPickerUIDefaultContentConfiguration : NSObject <DVEPickerEffectUIConfigurationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)effectListViewBackgroundColor;
- (double)effectListViewHeight;
- (id)stickerListViewLayout;
- (id)stickerItemCellKeyClass;
- (id)identifiedForModel:(id)a0;

@end
