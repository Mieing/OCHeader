@interface ACCAIGCUGCFrameReferenceUpdateAction : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long index;

+ (id)actionWithType:(unsigned long long)a0 index:(unsigned long long)a1;

@end
