@class NSString, NSDictionary, IESECLiveImageURLModel;

@interface IESECLiveEntranceViewModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveImageURLModel *leftIcon;
@property (retain, nonatomic) IESECLiveImageURLModel *rightIcon;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *trackName;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
