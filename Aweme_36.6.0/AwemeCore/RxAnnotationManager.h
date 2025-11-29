@class NSArray, NSMutableArray, NSMutableDictionary;

@interface RxAnnotationManager : NSObject {
    NSMutableArray *_orderedSections;
    NSMutableDictionary *_namedSections;
}

@property (readonly, copy, nonatomic) NSArray *annotationSections;

+ (id)sharedManager;

- (id)annotationSectionWithName:(id)a0;
- (void)addAnnotationSection:(id)a0;
- (void)removeAnnotationSection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
