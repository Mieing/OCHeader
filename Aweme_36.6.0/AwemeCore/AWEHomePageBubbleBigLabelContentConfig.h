@class UIImage, NSString;

@interface AWEHomePageBubbleBigLabelContentConfig : NSObject <AWEHomePageBubbleContentConfigProtocol>

@property (retain, nonatomic) UIImage *popoverImage;
@property (retain, nonatomic) NSString *popoverString;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) double delayTime;
@property (nonatomic) long long customLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
