@class NSString, NSArray, NSDictionary, NSNumber, AWEInTodaySchemaAnchor;

@interface AWEInTodaySchemaPublishConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityVideoType;
@property (copy, nonatomic) NSArray *infoStickerIds;
@property (retain, nonatomic) NSNumber *stickerOffsetX;
@property (retain, nonatomic) NSNumber *stickerOffsetY;
@property (copy, nonatomic) NSArray *musicIds;
@property (retain, nonatomic) AWEInTodaySchemaAnchor *anchor;
@property (copy, nonatomic) NSDictionary *anchorDic;
@property (copy, nonatomic) NSArray *hashtagList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
