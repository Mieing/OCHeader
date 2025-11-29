@class NSString, IESECURLModel;

@interface IESECShopClosePageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *mainImage;
@property (nonatomic) long long timeRangerType;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long curTime;
@property (nonatomic) long long isClosed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
