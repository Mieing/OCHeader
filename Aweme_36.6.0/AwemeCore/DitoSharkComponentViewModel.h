@class NSString, NSNumber;

@interface DitoSharkComponentViewModel : DitoComponentViewModel

@property (readonly) NSString *schema;
@property (readonly) NSString *content;
@property (retain, nonatomic) NSNumber *height;

- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
