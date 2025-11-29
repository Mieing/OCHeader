@class NSString, NSArray, NSDictionary, HTSLiveTextFormatModel;

@interface HTSLiveDisplayTextModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *defaultPattern;
@property (retain, nonatomic) HTSLiveTextFormatModel *defaultFormat;
@property (retain, nonatomic) NSArray *pieces;
@property (retain, nonatomic) NSDictionary *schemaInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFormatJSONTransformer;
+ (id)piecesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mapFormatModel:(id)a0;
- (id)mapPiecesModel;
- (id)mapSchemaInfosModel;
- (id)mapUserPiece:(id)a0;
- (id)mapImagePiece:(id)a0;
- (id)mapGiftPiece:(id)a0;
- (id)mapHeartPiece:(id)a0;
- (id)mapPatternPiece:(id)a0;
- (id)mapPatternModel:(id)a0;
- (id)htslive_mapToPBDisplayText;

@end
