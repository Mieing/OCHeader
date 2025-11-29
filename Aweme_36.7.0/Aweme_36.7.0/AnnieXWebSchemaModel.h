@class BDArrayParam, NSNumber, NSString;

@interface AnnieXWebSchemaModel : NSObject

@property (nonatomic) BOOL disableBounce;
@property (nonatomic) BOOL appendCommonParams;
@property (retain, nonatomic) BDArrayParam *appendGlobalProps;
@property (nonatomic) BOOL autoPlayBgm;
@property (retain, nonatomic) NSNumber *clickStart;
@property (nonatomic) BOOL disableAllBounces;
@property (nonatomic) BOOL disableBounces;
@property (nonatomic) BOOL disableSaveImage;
@property (nonatomic) BOOL enableSecureLink;
@property (copy, nonatomic) NSString *secLinkScene;
@property (nonatomic) BOOL disableWebviewSelectMenus;
@property (nonatomic) BOOL enableWebviewSelectSearch;
@property (nonatomic) BOOL ignoreCachePolicy;
@property (nonatomic) BOOL useWebViewTitle;
@property (nonatomic) BOOL webAutoMoveWithKeyboard;
@property (nonatomic) BOOL ADBlock;
@property (nonatomic) BOOL disableInputScroll;

+ (id)modelCustomPropertyMapper;
+ (id)modelWithSchemaData:(id)a0;

- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
