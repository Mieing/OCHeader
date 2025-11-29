@class CMMathViewAttributes, CMBlockQuoteViewAttributes, CMTableViewAttributes, CMCodeViewAttributes;

@interface CMYYTextAttributes : CMTextAttributes

@property (nonatomic) double customViewBottomPadding;
@property (nonatomic) double viewElementMinHeight;
@property (nonatomic) double contentMaxWidth;
@property (retain, nonatomic) CMTableViewAttributes *tableViewAttributes;
@property (retain, nonatomic) CMBlockQuoteViewAttributes *blockQuoteViewAttributes;
@property (retain, nonatomic) CMCodeViewAttributes *codeViewAttributes;
@property (retain, nonatomic) CMMathViewAttributes *mathViewAttributes;

- (void).cxx_destruct;
- (id)init;

@end
