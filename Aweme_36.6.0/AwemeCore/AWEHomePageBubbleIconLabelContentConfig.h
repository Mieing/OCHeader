@class NSString, UIImage, NSArray;

@interface AWEHomePageBubbleIconLabelContentConfig : NSObject <AWEHomePageBubbleContentConfigProtocol>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, copy, nonatomic) NSArray *iconURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithText:(id)a0 iconURLList:(id)a1;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)contentType;
- (id)initWithText:(id)a0 icon:(id)a1;

@end
