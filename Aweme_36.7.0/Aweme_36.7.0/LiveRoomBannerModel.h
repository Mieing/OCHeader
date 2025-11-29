@class NSString, NSDictionary, NSArray, IESLiveImage, NSNumber;

@interface LiveRoomBannerModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) NSNumber *bannerID;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) IESLiveImage *image;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) NSNumber *bannerType;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSNumber *frameType;
@property (retain, nonatomic) NSString *extraStr;
@property (retain, nonatomic) NSArray *trackingType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraJSONTransformer;
+ (id)actionTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
