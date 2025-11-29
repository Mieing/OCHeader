@class NSNumber, NSArray;

@interface IESECECTagGroupAttributes : IESECECTagCommonAttributes <NSCopying>

@property (retain, nonatomic) NSNumber *maxWidth;
@property (retain, nonatomic) NSNumber *maxHeight;
@property (retain, nonatomic) NSArray *ignoreTags;
@property (retain, nonatomic) NSNumber *tagGap;
@property (retain, nonatomic) NSNumber *lineGap;
@property (retain, nonatomic) NSNumber *maxLine;
@property (retain, nonatomic) NSNumber *preciselyLayout;

- (id)initWithSliceElement:(id)a0 elementViewContext:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
