@class NSString, NSDictionary;

@interface AWECoverTextBackground : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL isNinePatch;
@property (copy, nonatomic) NSDictionary *ninePatchInfo;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) unsigned long long widthMode;
@property (nonatomic) unsigned long long heightMode;
@property (nonatomic) double marginStart;
@property (nonatomic) double marginEnd;
@property (nonatomic) double marginTop;
@property (nonatomic) double marginBottom;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })capInsetsWithImage:(id)a0 scale:(double)a1;
- (void).cxx_destruct;

@end
