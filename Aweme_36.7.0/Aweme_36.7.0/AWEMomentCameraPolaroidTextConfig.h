@class NSString;

@interface AWEMomentCameraPolaroidTextConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double textTopMargin;
@property (nonatomic) double textRightMargin;
@property (copy, nonatomic) NSString *textFontName;
@property (nonatomic) double textFontSize;
@property (copy, nonatomic) NSString *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
