@class NSString, NSArray, NSMutableDictionary, NSMutableArray;

@interface RxAnnotationSection : NSObject <NSCoding> {
    NSMutableArray *_orderedCategories;
    NSMutableDictionary *_namedCategories;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *annotationCategories;

- (id)annotationCategoryWithName:(id)a0;
- (void)addAnnotationCategory:(id)a0;
- (void)removeAnnotationCategory:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)debugDescription;

@end
