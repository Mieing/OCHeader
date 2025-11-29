@class AWEHPBubbleImagePreloadCompletionModel, NSString, NSArray, UIImage, AWEHPBubbleImageLoadCompletionModel;

@interface AWEHomePageBubbleSingleImageLabelContentConfig : NSObject <AWEHomePageBubbleContentConfigProtocol, AWEHomePageBubbleImagePreloadConfigProtocol>

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSArray *imageURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEHPBubbleImageLoadCompletionModel *loadCompletionModel;
@property (retain, nonatomic) AWEHPBubbleImagePreloadCompletionModel *preloadCompletionModel;

- (id)initWithType:(long long)a0 text:(id)a1 imageURLList:(id)a2;
- (id)tryGetBubbleImageURLListForPreload;
- (id)initWithType:(long long)a0 text:(id)a1 image:(id)a2;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)contentType;

@end
