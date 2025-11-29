@class LineStyleWrap;

@interface TemplateDetailToplineWrap : NSObject

@property (retain, nonatomic) LineStyleWrap *keyWrap;
@property (retain, nonatomic) LineStyleWrap *valueWrap;
@property (retain, nonatomic) LineStyleWrap *extraWrap;
@property (nonatomic) BOOL hideDashLine;
@property (nonatomic) unsigned int smallTextCount;

- (void).cxx_destruct;

@end
