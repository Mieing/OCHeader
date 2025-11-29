@class NSNumber, NSString;

@interface IESLLLiveShelfMember : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *showMemberEntrance;
@property (copy, nonatomic) NSString *memberSchemaUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
