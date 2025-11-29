@class NSString, UIImage, NSArray;

@interface AWEHomePageBubbleDoubleImageLabelContentConfig : NSObject <AWEHomePageBubbleContentConfigProtocol>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIImage *firstImage;
@property (readonly, nonatomic) UIImage *secondImage;
@property (readonly, copy, nonatomic) NSArray *firstImageURLList;
@property (readonly, copy, nonatomic) NSArray *secondImageURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithText:(id)a0 firstImageURLList:(id)a1 secondImageURLList:(id)a2;
- (id)initWithText:(id)a0 firstImage:(id)a1 secondImage:(id)a2;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)contentType;

@end
