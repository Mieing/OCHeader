@class NSString, NSArray, NSMutableArray;

@interface WCADCanvasPage : NSObject <NSCoding, WCCanvasIfAbility>

@property (retain, nonatomic) NSString *bgCoverUrl;
@property (nonatomic) BOOL isAddBlur;
@property (retain, nonatomic) NSString *bgColorTheme;
@property (retain, nonatomic) NSString *blurColorTheme;
@property (nonatomic) double blurColorAlpha;
@property (retain, nonatomic) NSArray *originalComponentItemList;
@property (readonly, nonatomic) NSArray *adCanvasComponentItemList;
@property (nonatomic) int type;
@property (nonatomic) int subType;
@property (nonatomic) int bgFillMode;
@property (nonatomic) int bgCoverAlign;
@property (retain, nonatomic) NSArray *forbiddenGlobalItems;
@property (nonatomic) int canvasIf;
@property (nonatomic) int hasIf;
@property (retain, nonatomic) NSMutableArray *dynamicsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)updateUsingDynamicInfo:(id)a0;
- (void)updateAdCanvasComponentItemList;
- (void).cxx_destruct;

@end
