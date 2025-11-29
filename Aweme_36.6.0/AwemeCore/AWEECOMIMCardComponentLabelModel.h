@class YYTextLayout;

@interface AWEECOMIMCardComponentLabelModel : NSObject

@property (nonatomic) unsigned long long textMaxLine;
@property (retain, nonatomic) YYTextLayout *textLayout;

+ (id)modelFromAttribute:(id)a0 maxWidth:(double)a1 textMaxLine:(unsigned long long)a2;

- (void).cxx_destruct;

@end
