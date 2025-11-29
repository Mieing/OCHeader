@interface OMJAIFaceResult : NSObject

@property (nonatomic) long long faceID;
@property (nonatomic) float age;
@property (nonatomic) unsigned long long gender;

- (id)initWithFaceID:(long long)a0 age:(float)a1 gender:(unsigned long long)a2;

@end
