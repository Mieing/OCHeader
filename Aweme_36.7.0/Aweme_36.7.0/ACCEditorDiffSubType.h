@class NSString;

@interface ACCEditorDiffSubType : NSObject

@property (class, readonly, nonatomic) NSString *GetOriginSizeLogic;
@property (class, readonly, nonatomic) NSString *NonFastImport;
@property (class, readonly, nonatomic) NSString *Crop;
@property (class, readonly, nonatomic) NSString *Rotation;
@property (class, readonly, nonatomic) NSString *Scale;
@property (class, readonly, nonatomic) NSString *Translation;
@property (class, readonly, nonatomic) NSString *UseBlackEdge;
@property (class, readonly, nonatomic) NSString *InfoSticker;
@property (class, readonly, nonatomic) NSString *InteractiveSticker;
@property (class, readonly, nonatomic) NSString *FilterHDR;
@property (class, readonly, nonatomic) NSString *FilterOneClickBeauty;
@property (class, readonly, nonatomic) NSString *AIExpand;
@property (class, readonly, nonatomic) NSString *AIEraser;
@property (class, readonly, nonatomic) NSString *AIEnhance;
@property (class, readonly, nonatomic) NSString *AIGC;
@property (class, readonly, nonatomic) NSString *AITextToImage;

+ (id)Replaced;
+ (id)Music;

@end
