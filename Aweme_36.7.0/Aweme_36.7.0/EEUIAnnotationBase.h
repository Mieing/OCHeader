@class NSString, EEUIAnnotationCategory;

@interface EEUIAnnotationBase : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int uiType;
@property (readonly, nonatomic) EEUIAnnotationCategory *category;

- (id)initWithAnnotationBasePtr:(const void *)a0 andAnnotationParser:(id)a1;
- (void).cxx_destruct;

@end
