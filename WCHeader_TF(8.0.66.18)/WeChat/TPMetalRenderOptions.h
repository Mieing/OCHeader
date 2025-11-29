@class NSString;

@interface TPMetalRenderOptions : NSObject

@property (nonatomic) BOOL colorManagementFlag;
@property (nonatomic) int rendererSharpenFlag;
@property (nonatomic) int rendererLucidFlag;
@property (nonatomic) int rendererClarityFlag;
@property (nonatomic) BOOL renderOptYuv420;
@property (nonatomic) int rendererColorLUTFlag;
@property (copy, nonatomic) NSString *rendererColorLUTFilePath;
@property (nonatomic) BOOL enableViewContentMode;
@property (nonatomic) BOOL atBottom;

- (id)init;
- (void).cxx_destruct;

@end
