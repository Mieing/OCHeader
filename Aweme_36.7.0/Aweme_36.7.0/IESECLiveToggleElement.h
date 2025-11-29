@class NSString, IESECLiveToggleAuthor, IESECLiveImageURLModel;

@interface IESECLiveToggleElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveImageURLModel *icon;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) IESECLiveToggleAuthor *author;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
