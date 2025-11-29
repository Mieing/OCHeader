@class NSString, NSArray, NSMutableDictionary, NSMutableArray;

@interface RxAnnotationCollection : NSObject <NSCoding> {
    NSMutableArray *_orderedAnnotations;
    NSMutableDictionary *_identifierAnnotations;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *annotations;

- (id)annotationWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)addAnnotation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeAnnotation:(id)a0;
- (id)initWithName:(id)a0;
- (id)debugDescription;

@end
