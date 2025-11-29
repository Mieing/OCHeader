@class NSArray;

@interface WCActionAreaElementWrap : NSObject

@property (retain, nonatomic) NSArray *subElements;
@property (nonatomic) double subElementSpacing;
@property (nonatomic) double realWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) double minWidth;
@property (nonatomic) double adjustedWidth;
@property (nonatomic) unsigned long long displayLine;

- (id)initWithSubElements:(id)a0 subElementSpacing:(double)a1;
- (void)adjustSubElementsWidthFromBackToFront;
- (void).cxx_destruct;

@end
