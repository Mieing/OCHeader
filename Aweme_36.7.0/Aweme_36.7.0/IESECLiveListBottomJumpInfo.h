@class NSString;

@interface IESECLiveListBottomJumpInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long jumpType;
@property (nonatomic) BOOL showSmallWindow;
@property (retain, nonatomic) NSString *jumpURL;
@property (retain, nonatomic) NSString *schemaParamsType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
