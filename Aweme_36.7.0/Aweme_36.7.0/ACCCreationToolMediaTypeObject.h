@class NSMutableSet;

@interface ACCCreationToolMediaTypeObject : NSObject

@property (retain, nonatomic) NSMutableSet *mediaTypes;
@property (copy, nonatomic) id /* block */ didChange;

- (BOOL)supportImage;
- (BOOL)supportVideo;
- (void)addVideo;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addImage;

@end
