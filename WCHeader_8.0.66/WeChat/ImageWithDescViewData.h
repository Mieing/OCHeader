@class NSString, TextViewData, ImageViewData;

@interface ImageWithDescViewData : WXPBGeneratedMessage

@property (retain, nonatomic) ImageViewData *image;
@property (retain, nonatomic) TextViewData *desc;
@property (nonatomic) int position;
@property (nonatomic) int align;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
