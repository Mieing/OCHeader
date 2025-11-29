@class NSNumber, NSString;

@interface IESECLiveBlankElementModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *blankWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateWithMsg:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
