@class NSString, WXMASConstraint, UIView, NSMutableArray;

@interface WXMASConstraintMaker : NSObject <WXMASConstraintDelegate>

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (readonly, nonatomic) WXMASConstraint *left;
@property (readonly, nonatomic) WXMASConstraint *top;
@property (readonly, nonatomic) WXMASConstraint *right;
@property (readonly, nonatomic) WXMASConstraint *bottom;
@property (readonly, nonatomic) WXMASConstraint *leading;
@property (readonly, nonatomic) WXMASConstraint *trailing;
@property (readonly, nonatomic) WXMASConstraint *width;
@property (readonly, nonatomic) WXMASConstraint *height;
@property (readonly, nonatomic) WXMASConstraint *centerX;
@property (readonly, nonatomic) WXMASConstraint *centerY;
@property (readonly, nonatomic) WXMASConstraint *baseline;
@property (readonly, nonatomic) WXMASConstraint *firstBaseline;
@property (readonly, nonatomic) WXMASConstraint *lastBaseline;
@property (readonly, nonatomic) WXMASConstraint *leftMargin;
@property (readonly, nonatomic) WXMASConstraint *rightMargin;
@property (readonly, nonatomic) WXMASConstraint *topMargin;
@property (readonly, nonatomic) WXMASConstraint *bottomMargin;
@property (readonly, nonatomic) WXMASConstraint *leadingMargin;
@property (readonly, nonatomic) WXMASConstraint *trailingMargin;
@property (readonly, nonatomic) WXMASConstraint *centerXWithinMargins;
@property (readonly, nonatomic) WXMASConstraint *centerYWithinMargins;
@property (readonly, nonatomic) id /* block */ attributes;
@property (readonly, nonatomic) WXMASConstraint *edges;
@property (readonly, nonatomic) WXMASConstraint *size;
@property (readonly, nonatomic) WXMASConstraint *center;
@property (nonatomic) BOOL updateExisting;
@property (nonatomic) BOOL removeExisting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (id)install;
- (void)constraint:(id)a0 shouldBeReplacedWithConstraint:(id)a1;
- (id)constraint:(id)a0 addConstraintWithLayoutAttribute:(long long)a1;
- (id)addConstraintWithAttributes:(long long)a0;
- (id)addConstraintWithLayoutAttribute:(long long)a0;
- (id /* block */)group;
- (void).cxx_destruct;

@end
