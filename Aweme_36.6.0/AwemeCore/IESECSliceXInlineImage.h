@class NSString;

@interface IESECSliceXInlineImage : IESECSliceXInlineContent

@property (retain, nonatomic) NSString *imageURL;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSString *sceneTag;

- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)isEqual:(id)a0;
- (id)initWithElement:(id)a0;

@end
