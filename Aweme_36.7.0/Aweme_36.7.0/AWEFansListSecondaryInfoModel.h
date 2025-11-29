@class NSString;

@interface AWEFansListSecondaryInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *trackText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
