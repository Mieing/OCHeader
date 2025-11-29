@class NSString;

@interface AWEAwemeSearchVideoShortAnswerPrefixModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *iconURL;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *descIcon;
@property (readonly, nonatomic) NSString *descIconDark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
