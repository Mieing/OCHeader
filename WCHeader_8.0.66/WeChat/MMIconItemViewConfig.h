@class NSString, NSURL, UIImage;
@protocol MMIconItemConfigDelegate, MMIconItemDelegate;

@interface MMIconItemViewConfig : NSObject

@property (weak, nonatomic) id<MMIconItemConfigDelegate> configDelegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *imageUrl;
@property (weak, nonatomic) id<MMIconItemDelegate> delegate;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) double iconLength;
@property (nonatomic) double bgLength;
@property (nonatomic) double bgCornerRadius;
@property (nonatomic) double iconLabelPadding;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) BOOL changeIconColorOnAppearanceChange;

- (id)init;
- (void).cxx_destruct;

@end
