@class NSString, NSArray, UIImage;

@interface AWELeftSideBarEntranceCaptionBubbleModel : NSObject <NSCopying, AWEHPCaptionBubbleModelConfigProtocol>

@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *businessSubId;
@property (nonatomic) BOOL businessConsume;
@property (copy, nonatomic) NSArray *tabIds;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UIImage *strengthenDarkImage;
@property (retain, nonatomic) UIImage *strengthenLightImage;
@property (copy, nonatomic) NSString *strengthenDarkImageUrl;
@property (copy, nonatomic) NSString *strengthenLightImageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
