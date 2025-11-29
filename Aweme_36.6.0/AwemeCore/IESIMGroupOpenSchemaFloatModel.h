@interface IESIMGroupOpenSchemaFloatModel : JSONModel

@property (nonatomic) BOOL floatMode;
@property (nonatomic) double heightBias;
@property (nonatomic) BOOL openChatInFloatMode;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

@end
