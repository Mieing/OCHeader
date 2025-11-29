@class NSString, NSArray, NSDictionary, BDXBridgeStudioComposerExportToolbar;

@interface BDXBridgeStudioComposerExportEdit : BDXBridgeModel

@property (copy, nonatomic) NSString *bottomNextTitle;
@property (retain, nonatomic) NSArray *instances;
@property (copy, nonatomic) NSDictionary *brush;
@property (copy, nonatomic) NSDictionary *aiErase;
@property (copy, nonatomic) NSDictionary *crop;
@property (retain, nonatomic) BDXBridgeStudioComposerExportToolbar *toolbar;
@property (copy, nonatomic) NSDictionary *textSticker;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
