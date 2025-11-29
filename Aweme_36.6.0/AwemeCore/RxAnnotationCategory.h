@class NSString, NSArray, NSMutableDictionary, NSMutableArray;

@interface RxAnnotationCategory : NSObject <NSCoding> {
    NSMutableArray *_orderedCollections;
    NSMutableDictionary *_namedCollections;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *annotationCollections;

- (void)removeAnnotationCollection:(id)a0;
- (id)annotationCollectionWithName:(id)a0;
- (void)addAnnotationCollection:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)debugDescription;

@end
