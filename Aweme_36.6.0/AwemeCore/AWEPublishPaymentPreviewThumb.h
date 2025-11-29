@class UIImage;

@interface AWEPublishPaymentPreviewThumb : NSObject

@property (nonatomic) double value;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) UIImage *thumbImage;
@property (copy, nonatomic) id /* block */ valChangeBlock;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
