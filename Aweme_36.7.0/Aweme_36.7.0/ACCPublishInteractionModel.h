@class NSMutableArray;

@interface ACCPublishInteractionModel : NSObject <NSCopying>

@property (nonatomic) BOOL haveAddModelFromEditor;
@property (retain, nonatomic) NSMutableArray *interactionModelArray;
@property (retain, nonatomic) NSMutableArray *currentSectionLocations;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
