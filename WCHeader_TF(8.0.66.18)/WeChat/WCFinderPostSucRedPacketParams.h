@class NSString, WCFinderRedPacketVideoEditCropRectModel;

@interface WCFinderPostSucRedPacketParams : NSObject

@property (copy, nonatomic) NSString *exportId;
@property (copy, nonatomic) NSString *nonceId;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *thumbUrl;
@property (nonatomic) double startAtSeconds;
@property (nonatomic) double durationMaxLimit;
@property (retain, nonatomic) WCFinderRedPacketVideoEditCropRectModel *cropRectModel;

+ (id)genParamsByDataItem:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
