@class AWEHPBubbleImagePreloadCompletionModel, NSString, NSArray, UIImage, AWEHPBubbleImageLoadCompletionModel;

@interface AWEHomePageBubbleLiveHeadLabelContentConfig : NSObject <AWEHomePageBubbleContentConfigProtocol, AWEHomePageBubbleImagePreloadConfigProtocol>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSArray *imageURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEHPBubbleImageLoadCompletionModel *loadCompletionModel;
@property (retain, nonatomic) AWEHPBubbleImagePreloadCompletionModel *preloadCompletionModel;

- (id)initWithText:(id)a0 imageURLList:(id)a1;
- (id)tryGetBubbleImageURLListForPreload;
- (id)initWithText:(id)a0 image:(id)a1;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)contentType;

@end
