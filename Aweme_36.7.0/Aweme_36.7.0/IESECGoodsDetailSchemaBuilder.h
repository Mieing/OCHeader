@class IESECGoodsDetailRequestParams, NSMutableDictionary;

@interface IESECGoodsDetailSchemaBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *schemaQueryItems;
@property (retain, nonatomic) IESECGoodsDetailRequestParams *requestModel;

+ (id)schemaBuilderWithOriginalSchema:(id)a0;
+ (id)schemaBuilderWithOriginalSchemaWithoutFilter:(id)a0;
+ (id)schemaBuilderWithOriginalSchemaDict:(id)a0;

- (id /* block */)enterFrom;
- (id /* block */)sourceBtmToken;
- (id /* block */)willClosePage;
- (BOOL)mainPic34StyleeAvailable;
- (id /* block */)mergeToPassthroughEventV3Dict;
- (id /* block */)mergeToEntranceInfo;
- (id /* block */)coverImageURI;
- (id /* block */)coverImageCenterY;
- (id /* block */)liveWindowRoomID;
- (id /* block */)mergeToCreativeId;
- (id /* block */)mergeToAdParams;
- (id /* block */)mergeToQpon;
- (id /* block */)mergeToQponMeta;
- (id /* block */)disableLiveWindow;
- (id /* block */)closeHalfPageProgress;
- (id /* block */)smallWindowMute;
- (id)initWithOriginalSchema:(id)a0;
- (id /* block */)pdpOpenCompletion;
- (id /* block */)willOpenHalfPage;
- (id /* block */)smallWindowPriority;
- (id /* block */)liveFusionSplit;
- (id)schemaV2JSBridge;
- (id)initWithOriginalSchemaWithoutfilter:(id)a0;
- (id)initWithOriginalSchemaDict:(id)a0;
- (id /* block */)followStatus;
- (id /* block */)animationType;
- (void).cxx_destruct;
- (id /* block */)completion;
- (id /* block */)open;
- (id)init;
- (id /* block */)fullMode;
- (id /* block */)presenting;
- (id /* block */)coverImage;
- (id /* block */)heightPercent;

@end
