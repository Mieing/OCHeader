@class NSString, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveGoodsCoverTopIcon : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESECLiveImageURLModel *icon;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) NSNumber *showIconTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
