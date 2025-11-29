@class NSString, WCAdvertiseFinderTopicResImageModel;

@interface WCAdvertiseFinderTopicResModel : NSObject

@property (retain, nonatomic) NSString *avatar;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *barBgColor;
@property (retain, nonatomic) NSString *duration;
@property (retain, nonatomic) NSString *finderType;
@property (retain, nonatomic) WCAdvertiseFinderTopicResImageModel *imageInfo;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
