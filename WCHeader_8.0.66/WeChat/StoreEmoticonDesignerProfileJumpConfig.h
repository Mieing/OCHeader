@class NSString, EmoticonStoreReportInfo, PersonalDesigner;

@interface StoreEmoticonDesignerProfileJumpConfig : NSObject

@property (retain, nonatomic) PersonalDesigner *persnalDesigner;
@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) NSString *designerId;
@property (retain, nonatomic) NSString *extContent;
@property (nonatomic) int extraceScene;
@property (nonatomic) BOOL isPush;
@property (retain, nonatomic) EmoticonStoreReportInfo *reportInfo;
@property (nonatomic) BOOL needLeftNavReturn;
@property (nonatomic) BOOL needJmp2SingleEmoji;
@property (retain, nonatomic) NSString *oldRedirectUrl;
@property (nonatomic) BOOL needJmp2EmoticonTab;
@property (nonatomic) int enterHasRedDot;
@property (retain, nonatomic) NSString *sdkRequestID;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ addNewPackageBlock;
@property (copy, nonatomic) id /* block */ viewDetailBlock;

- (id)init;
- (void).cxx_destruct;

@end
