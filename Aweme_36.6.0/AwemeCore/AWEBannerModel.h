@class AWEBanneraAdDataModel, NSString, NSNumber, AWEURLModel;
@protocol ACCBanneraAdDataModelProtocol;

@interface AWEBannerModel : AWEBaseApiModel <AWEStudioBannerModelProtocol>

@property (retain, nonatomic) NSString *bannerID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *bannerURL;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSString *schema;
@property (copy, nonatomic) id<ACCBanneraAdDataModelProtocol> adData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *bannerID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *bannerURL;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEBanneraAdDataModel *adData;
@property (nonatomic) BOOL isClickable;

+ (id)bannerURLJSONTransformer;
+ (id)adDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)tagID;

@end
