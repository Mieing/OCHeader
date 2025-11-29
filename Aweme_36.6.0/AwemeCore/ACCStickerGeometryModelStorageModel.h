@class NSDecimalNumber, NSString;

@interface ACCStickerGeometryModelStorageModel : MTLModel <ACCSerializationProtocol>

@property (retain, nonatomic) NSDecimalNumber *x;
@property (retain, nonatomic) NSDecimalNumber *y;
@property (retain, nonatomic) NSDecimalNumber *xRatio;
@property (retain, nonatomic) NSDecimalNumber *yRatio;
@property (retain, nonatomic) NSDecimalNumber *width;
@property (retain, nonatomic) NSDecimalNumber *height;
@property (retain, nonatomic) NSDecimalNumber *rotation;
@property (retain, nonatomic) NSDecimalNumber *scale;
@property (nonatomic) BOOL preferredRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accs_excludeKeys;
+ (id)accs_acceptClasses;

- (void).cxx_destruct;

@end
