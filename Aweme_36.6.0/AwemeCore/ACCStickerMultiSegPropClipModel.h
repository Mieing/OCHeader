@class NSArray, NSString;

@interface ACCStickerMultiSegPropClipModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSArray *xPoints;
@property (copy, nonatomic) NSArray *yPoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
