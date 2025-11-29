@class NSString, UIView, MASConstraint, NSMutableArray;

@interface MASConstraintMaker : NSObject <MASConstraintDelegate>

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (readonly, nonatomic) MASConstraint *left;
@property (readonly, nonatomic) MASConstraint *top;
@property (readonly, nonatomic) MASConstraint *right;
@property (readonly, nonatomic) MASConstraint *bottom;
@property (readonly, nonatomic) MASConstraint *leading;
@property (readonly, nonatomic) MASConstraint *trailing;
@property (readonly, nonatomic) MASConstraint *width;
@property (readonly, nonatomic) MASConstraint *height;
@property (readonly, nonatomic) MASConstraint *centerX;
@property (readonly, nonatomic) MASConstraint *centerY;
@property (readonly, nonatomic) MASConstraint *baseline;
@property (readonly, nonatomic) MASConstraint *firstBaseline;
@property (readonly, nonatomic) MASConstraint *lastBaseline;
@property (readonly, nonatomic) MASConstraint *leftMargin;
@property (readonly, nonatomic) MASConstraint *rightMargin;
@property (readonly, nonatomic) MASConstraint *topMargin;
@property (readonly, nonatomic) MASConstraint *bottomMargin;
@property (readonly, nonatomic) MASConstraint *leadingMargin;
@property (readonly, nonatomic) MASConstraint *trailingMargin;
@property (readonly, nonatomic) MASConstraint *centerXWithinMargins;
@property (readonly, nonatomic) MASConstraint *centerYWithinMargins;
@property (readonly, nonatomic) id /* block */ attributes;
@property (readonly, nonatomic) MASConstraint *edges;
@property (readonly, nonatomic) MASConstraint *size;
@property (readonly, nonatomic) MASConstraint *center;
@property (nonatomic) BOOL updateExisting;
@property (nonatomic) BOOL removeExisting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)constraint:(id)a0 addConstraintWithLayoutAttribute:(long long)a1;
- (void)constraint:(id)a0 shouldBeReplacedWithConstraint:(id)a1;
- (id)addConstraintWithLayoutAttribute:(long long)a0;
- (id)addConstraintWithAttributes:(long long)a0;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id /* block */)group;
- (id)install;

@end
