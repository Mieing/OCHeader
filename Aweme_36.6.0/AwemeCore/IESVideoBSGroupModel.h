@class NSArray, NSString, NSNumber;

@interface IESVideoBSGroupModel : MTLModel <MTLJSONSerializing, IESVideoBSGroupModelProtocol>

@property (copy, nonatomic) NSArray *configArray;
@property (retain, nonatomic) NSString *defaultConfig;
@property (copy, nonatomic) NSArray *bitrateRange;
@property (retain, nonatomic) NSNumber *defaultBitrate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
